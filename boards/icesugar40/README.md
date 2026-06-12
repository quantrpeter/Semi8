# Open8 on IceSugar 40

This adds first-class support for running the Open8 8-bit soft core on an **iCE40UP5K** FPGA (IceSugar 40 or any compatible SG48-package board).

## Quick start from project root

```sh
# Blink demo: toggles the onboard RGB LED white at ~1 Hz
make EXAMPLE=blink BOARD=icesugar40 bitstream
make EXAMPLE=blink BOARD=icesugar40 prog

# Or the classic sum demo (computes 1+2+...+10 = 55 = 0x37, shown on the port pins)
make EXAMPLE=program BOARD=icesugar40 bitstream
make EXAMPLE=program BOARD=icesugar40 prog
```

The synthesis (yosys + nextpnr-ice40 + icepack) runs inside the `quantrpeter/ice40:latest` container. Only the assembler (`make hex`, Python) and the final `prog` step run on the host.

After configuration the core starts automatically (after a short internal power-on reset) and executes `program.hex`.

## What you see on a stock board

The design follows the proven reference design in
`icesugar40-example/src/basic/verilog/leds`:

- The onboard **RGB LED** is driven as ordinary user IO on pins **40 (R), 41 (G), 39 (B)**, **active-low** (drive 0 to light a channel). No `SB_RGBA_DRV` hard IP is used.
- `LED_R/G/B` show `port_out[0]`, `port_out[1]`, `port_out[2]` respectively, so with the blink example (`port_out` toggling `0x00`/`0xFF`) the RGB LED blinks **white at roughly 1 Hz**.
- The full 8-bit `port_out` is also available (active-low) on the **PMOD2** pins (`led0`..`led7`, see `constr/pins.pcf`) for an external LED board.

## Clock and reset

- **Clock**: the board's 12 MHz oscillator on package pin **35** (same as all the reference examples).
- **Reset**: a short internal power-on reset (~2.7 ms) generated in `top.v`. There is **no external reset pin** — an earlier revision mapped one to pin 10, which on iCESugar is actually the USB_DP line to the iCELink and held the core in reset permanently.

## I/O port

Open8 exposes one 8-bit port at I/O address 0 (see `src/open8_top.v`):

- `OUT 0, Rxx`  → `port_out` (→ LEDs)
- `IN  Rxx, 0`  → `port_in` (tied to 0 in this wrapper)

The board wrapper instantiates the SoC with `DMEM_ADDR_W=6` (64 bytes of data RAM). The data memory is asynchronous-read, so it is built from LUTs/FFs — the simulation default of 4 KB would not fit in a UP5K. Raise the parameter in `top.v` if your program needs more RAM (and check the nextpnr utilization report).

## Synthesis notes (important if you modify the RTL)

- `src/open8_pmem.v` / `src/open8_dmem.v` guard their simulation-only
  `initial for (...) mem[i] = 0;` zero-fill loops with `` `ifndef SYNTHESIS ``.
  Under yosys such loops become unclocked memory-write cells, which silently
  destroys the `$readmemh` ROM contents — the whole CPU then constant-folds
  away and you get a bitstream with the LEDs tied off (nothing blinks).
  If you add new memories, initialize them with `$readmemh`/`initial mem[i] = ...`
  constants only, or use the same guard.
- A healthy build of the blink example uses a few hundred `ICESTORM_LC`
  (check the nextpnr log). If you ever see ~12 cells placed and
  "No Fmax available; no interior timing paths found", the design collapsed
  to constants and the bitstream is useless.

## Toolchain (Docker)

- The image `quantrpeter/ice40:latest` contains yosys, nextpnr-ice40, icepack.
- `make BOARD=icesugar40 bitstream` runs the inner build inside the container.
- Programming (`prog`) runs on the host by detecting the iCELink USB drive (via `df | grep iCELink`) and copying the `.bin` to it. No `icesprog` / `iceprog` tool is required.

## Troubleshooting

- LED does not blink → re-run a clean build (`make EXAMPLE=blink BOARD=icesugar40 fpga-clean bitstream prog`) and power-cycle the board after the copy to iCELink completes.
- Programming fails / iCELink not found → ensure the board is connected and appears as a drive (check `df | grep -i iCELink`).
- Switching examples → just pass a different `EXAMPLE=`; the root Makefile reassembles `program.hex` automatically and only touches it when the content changed.
- Want different blink speed → adjust the delay loop in `example/blink/blink.s` (see the timing comment there; the clock is 12 MHz).
