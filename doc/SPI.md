# Open8 SPI Master — Design & Implementation

This document describes the SPI master peripheral added to the Open8 SoC: how it
works, the register interface, every file that was touched to integrate it, and
how to use, simulate, and build it.

The peripheral is **`open8_spi`** (`src/open8_spi.v`). It is a minimal,
full-duplex SPI **master**:

- MSB-first, 8 bits per transfer.
- Software-configurable clock divider and SPI mode (CPOL/CPHA — all four modes).
- Chip-select (`cs_n`) driven directly from a control-register bit, so software
  frames its own multi-byte transactions.
- Hangs off the existing Open8 I/O bus; no core/ISA changes were required.

---

## 1. Background: the I/O bus it builds on

The Open8 core already exposes a simple memory-mapped I/O bus, driven by the
`IN`/`OUT` instructions:

| Signal      | Width | Direction (core) | Meaning                                  |
|-------------|-------|------------------|------------------------------------------|
| `io_addr`   | 6     | out              | I/O address (`OUT P,Rr` / `IN Rd,P`)     |
| `io_we`     | 1     | out              | write strobe, high for one cycle on `OUT`|
| `io_wdata`  | 8     | out              | byte written by `OUT`                    |
| `io_rdata`  | 8     | in               | byte returned to `IN`                    |

Because the core is single-cycle, `io_we` is asserted for **exactly one clock**
when an `OUT` executes — a clean start strobe for a peripheral. `io_addr` is
6 bits, so up to **64 I/O addresses** are available; before SPI, only address 0
(the GPIO/LED port) was decoded.

The SPI peripheral simply claims three more of those addresses.

---

## 2. Register map

Decoded in `src/open8_top.v`:

| I/O addr | Name       | Access | Description                                                        |
|----------|------------|--------|--------------------------------------------------------------------|
| 0        | `PORT0`    | R/W    | 8-bit GPIO port (LEDs) — pre-existing                              |
| 1        | `SPI_DATA` | W      | Load a byte **and start** a transfer                               |
|          |            | R      | Last received byte (`rx_data`)                                     |
| 2        | `SPI_STAT` | R      | `{7'b0, busy}` — bit 0 = transfer in progress                      |
| 3        | `SPI_CTRL` | W      | Control register (see below)                                       |

### Control register (`SPI_CTRL`, write)

| Bits   | Field    | Meaning                                                        |
|--------|----------|----------------------------------------------------------------|
| `[2:0]`| `CLKDIV` | `sck` half-period = `(CLKDIV + 1)` core clocks                 |
| `[3]`  | `CPOL`   | Clock idle polarity (0 = idle low, 1 = idle high)              |
| `[4]`  | `CPHA`   | Clock phase (0 = sample on leading edge, 1 = sample on trailing)|
| `[5]`  | `CS_N`   | Chip-select output level (drive **0** to select a slave)       |

`sck` frequency:

```
f_sck = f_clk / (2 * (CLKDIV + 1))
```

At the iCESugar's 12 MHz clock: `CLKDIV=0` → 6 MHz, `CLKDIV=1` → 3 MHz, …,
`CLKDIV=7` → 750 kHz.

After reset the control register is `CLKDIV=0, CPOL=0, CPHA=0, CS_N=1`
(deselected).

---

## 3. How the shift engine works

The transfer is driven entirely by `sck` edges. A full byte is **8 `sck`
periods = 16 edges**. The register `tcnt` counts edges already produced (0..15):

- **Leading** edges are the odd-numbered ones (1st, 3rd, … → `tcnt` even).
- **Trailing** edges are the even-numbered ones (2nd, 4th, … → `tcnt` odd).

The mode determines which edge samples MISO and which changes MOSI:

| Mode  | CPOL | CPHA | MOSI changes on | MISO sampled on | First bit               |
|-------|------|------|-----------------|-----------------|-------------------------|
| 0     | 0    | 0    | trailing        | leading         | presented at start      |
| 1     | 0    | 1    | leading         | trailing        | presented on 1st leading|
| 2     | 1    | 0    | trailing        | leading         | presented at start      |
| 3     | 1    | 1    | leading         | trailing        | presented on 1st leading|

This collapses to one rule in the RTL:

```verilog
wire this_is_leading = (tcnt[0] == 1'b0);          // edge (tcnt+1) is odd
wire do_sample       = this_is_leading ? ~cpha : cpha;
```

- `do_sample` true → `rx_shift <= {rx_shift[6:0], miso}` (shift in a bit).
- `do_sample` false → `mosi <= tx_shift[7]; tx_shift <= {tx_shift[6:0], 1'b0}`
  (present the next bit, MSB-first).

For `CPHA=0` the first bit (`wdata[7]`) is placed on MOSI the moment the
transfer starts (before any edge); for `CPHA=1` the first bit goes out on the
first leading edge instead.

### Lifecycle

1. **Idle** (`running=0`): `sck` is held at `CPOL`. A write to `SPI_DATA`
   (`data_we`) latches the byte, clears `rx_shift`, presents the first bit (if
   `CPHA=0`), and sets `running=1`.
2. **Running**: a divider counter `dcnt` counts `(CLKDIV+1)` core clocks per
   half-period; each time it expires, `sck` toggles and one sample/change action
   happens per the table above.
3. After the **16th edge** (`tcnt==15`), `running` drops to 0; `sck` has
   returned to `CPOL`, so there is no idle glitch. `busy` (= `running`) clears
   and `rx_data` holds the received byte.

`cs_n` is independent of all this — it follows the `CS_N` control bit directly,
so software asserts it, runs as many byte transfers as it likes, then deasserts.

---

## 4. Implementation steps (every file changed)

### Step 1 — New peripheral RTL: `src/open8_spi.v`

The standalone SPI master module described above. Its interface:

```verilog
module open8_spi (
    input  wire        clk, rst_n,
    input  wire        ctrl_we,   // write SPI_CTRL  (one-cycle strobe)
    input  wire        data_we,   // write SPI_DATA  (one-cycle strobe; starts xfer)
    input  wire [7:0]  wdata,     // byte from OUT
    output wire [7:0]  rx_data,   // last received byte
    output wire        busy,      // transfer in progress
    output reg         sck,
    output reg         mosi,
    input  wire        miso,
    output wire        cs_n
);
```

### Step 2 — Integrate into the SoC: `src/open8_top.v`

- Added the SPI pins to the module port list:

```verilog
    // SPI master (I/O addresses 1..3)
    output wire        spi_sck,
    output wire        spi_mosi,
    input  wire        spi_miso,
    output wire        spi_cs_n,
```

- Defined the I/O address map and the per-register write strobes:

```verilog
    localparam [5:0] IO_PORT0    = 6'd0;
    localparam [5:0] IO_SPI_DATA = 6'd1;
    localparam [5:0] IO_SPI_STAT = 6'd2;
    localparam [5:0] IO_SPI_CTRL = 6'd3;

    wire [7:0] spi_rx;
    wire       spi_busy;
    wire       spi_ctrl_we = io_we && (io_addr == IO_SPI_CTRL);
    wire       spi_data_we = io_we && (io_addr == IO_SPI_DATA);
```

- Instantiated `open8_spi` and widened the I/O read mux from a single `if` into
  a `case` that returns `port_in`, `spi_rx`, or `{7'b0, spi_busy}` depending on
  `io_addr`. (The existing port-0 write capture / `port_out_we` strobe is
  unchanged; SPI writes are handled inside the peripheral via the strobes.)

### Step 3 — Board wiring: `boards/icesugar40/top.v`

- Added `spi_sck`, `spi_mosi`, `spi_miso`, `spi_cs_n` to the board `top` ports.
- Connected them to the `open8_top` instance.

### Step 4 — Pin constraints: `boards/icesugar40/constr/pins.pcf`

Mapped the SPI signals onto the iCESugar's dedicated SPI header (same pins as
the reference `icesugar40-example/src/common/io.pcf`):

```
set_io spi_cs_n 16   # SPI_SS
set_io spi_sck  15   # SPI_SCK
set_io spi_mosi 17   # SPI_MOSI
set_io spi_miso 14   # SPI_MISO
```

### Step 5 — Build files

- `Makefile` (root): added `src/open8_spi.v` to `SRC` (Verilator build).
- `boards/icesugar40/Makefile`: added `../../src/open8_spi.v` to `RTL`
  (yosys synthesis).

### Step 6 — Example program: `example/spi/spi.s`

A configure → transmit → poll → receive sequence (see §5).

### Step 7 — Simulation hooks: `tb/sim_main.cpp`

- In `tick()`, tie `spi_miso = spi_mosi` so the master receives back whatever it
  transmits (a loopback that lets the example self-check with no external slave).
- Added `+example=spi` detection and a check that the program received `0xA5`
  (stored in `R18`).

---

## 5. Using it from software

There is no bit-test/skip instruction yet, so the busy flag is polled with
`IN` + `ANDI` + `BRNE`. From `example/spi/spi.s`:

```asm
        ; configure: CLKDIV=1, CPOL=0, CPHA=0 (mode 0), CS asserted (CS_N=0)
        LDI   R16, 0x01
        OUT   3, R16

        ; start a transfer of 0xA5
        LDI   R16, 0xA5
        OUT   1, R16          ; write SPI_DATA -> begins shifting

wait:
        IN    R17, 2          ; read SPI_STAT
        ANDI  R17, 0x01       ; isolate busy bit
        BRNE  wait            ; spin while busy

        IN    R18, 1          ; R18 <- received byte

        ; deassert CS (CS_N=1), keep CLKDIV=1 / mode 0
        LDI   R16, 0x21
        OUT   3, R16

        SLEEP
```

**Multi-byte transactions**: assert CS once (`OUT 3` with `CS_N=0`), then repeat
the *start → poll busy → read* sequence for each byte, and finally deassert CS
(`OUT 3` with `CS_N=1`).

**Control-byte cheat sheet** (mode 0, CS asserted): `clkdiv` in bits `[2:0]`,
`CS_N` in bit 5.

| Byte   | Meaning                              |
|--------|--------------------------------------|
| `0x00` | CLKDIV=0, mode 0, CS asserted        |
| `0x01` | CLKDIV=1, mode 0, CS asserted        |
| `0x20` | CLKDIV=0, mode 0, CS **de**asserted  |
| `0x21` | CLKDIV=1, mode 0, CS **de**asserted  |
| `0x18` | CLKDIV=0, **mode 3** (CPOL=1,CPHA=1), CS asserted |

---

## 6. Simulation & self-test

`tb/sim_main.cpp` loops MOSI back to MISO, so a transmitted byte returns
unchanged. Run:

```sh
make EXAMPLE=spi run
```

Expected output:

```
Open8 simulation finished after 44 cycles (halted=1, pc=0x000A)
Register / state checks:
  [PASS] R18 spi rx   got=0xA5 (165) expected=0xA5 (165)

ALL CHECKS PASSED
```

To inspect `sck`/`mosi`/`miso`/`cs_n` (and the internal `tx_shift`/`rx_shift`)
in a waveform:

```sh
make EXAMPLE=spi clean wave   # runs the sim then opens open8.vcd in gtkwave
```

---

## 7. Building & flashing for the iCESugar 40

```sh
make EXAMPLE=spi BOARD=icesugar40 bitstream   # yosys + nextpnr + icepack (Docker)
make EXAMPLE=spi BOARD=icesugar40 prog        # copy .bin to the iCELink drive
```

Wire your SPI slave to the board's SPI header: `SS=pin16`, `SCK=pin15`,
`MOSI=pin17`, `MISO=pin14`, plus common ground (and the slave's `Vcc`).

---

## 8. Limitations & possible extensions

- **Polling only** — no interrupt on transfer-complete (the SoC has no interrupt
  subsystem yet). Software busy-waits on `SPI_STAT`.
- **Master only**, single chip-select. Additional slaves would need extra GPIO
  for their `cs_n` lines, or a wider control register.
- **8-bit fixed** transfer length.
- A natural next step is a "transfer complete" interrupt once the core's
  interrupt path (see `doc/architecture.md` roadmap) lands, removing the poll
  loop. A small TX/RX FIFO would also let software stream bytes without polling
  between each one.

---

## 9. File index

| File                                   | Change                                            |
|----------------------------------------|---------------------------------------------------|
| `src/open8_spi.v`                      | **New** — the SPI master peripheral               |
| `src/open8_top.v`                      | SPI ports, I/O address map, decode, instantiation |
| `boards/icesugar40/top.v`              | Board-level SPI ports + wiring                    |
| `boards/icesugar40/constr/pins.pcf`    | SPI pin constraints (14–17)                       |
| `Makefile`                             | Added `open8_spi.v` to Verilator `SRC`            |
| `boards/icesugar40/Makefile`           | Added `open8_spi.v` to synthesis `RTL`            |
| `example/spi/spi.s`                    | **New** — SPI demo program                        |
| `tb/sim_main.cpp`                      | MOSI→MISO loopback + `+example=spi` check         |
| `doc/architecture.md`                  | I/O map + SPI section                             |
| `README.md`                            | Peripherals list + examples table                 |
