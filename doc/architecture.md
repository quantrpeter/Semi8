# Open8 Soft Core — Architecture

This document describes the RTL implementation of the **Open8** 8-bit
microcontroller (the AVR-inspired ISA specified in `README.md`,
`register.md`, `instruction.md`, `timer.md` and `interrupt.md`).

The implementation favours **simplicity and clarity** over micro-architectural
sophistication: it is a single-cycle, Harvard-style core meant as a readable
reference and a Verilator test vehicle.

## Block diagram

![Open8 architecture](architecture.svg)

## Design summary

| Property              | Value                                                        |
|-----------------------|-------------------------------------------------------------|
| Architecture          | Harvard (separate program / data buses)                     |
| Execution model       | Single-cycle — **1 instruction per clock**                  |
| Data width            | 8-bit                                                        |
| Program counter       | 16-bit (64K word space)                                      |
| Registers             | 32 × 8-bit (R0–R31), X/Y/Z 16-bit pairs                      |
| Status register       | `SREG = {I,T,H,S,V,N,Z,C}`                                   |
| Program memory        | 4K × 16-bit ROM, dual asynchronous read                     |
| Data memory           | 4K × 8-bit SRAM, async read / sync write                    |
| I/O                   | banked 8-bit GPIO (addr 0…IO_PORTS-1) + SPI master           |
| Reset                 | asynchronous, active-low (`rst_n`)                           |

## Module hierarchy

```
open8_top                  (src/open8_top.v)   SoC: glue + I/O + debug
├── open8_core             (src/open8_core.v)  CPU datapath + control
├── open8_pmem             (src/open8_pmem.v)  program ROM (16-bit words)
├── open8_dmem             (src/open8_dmem.v)  data SRAM (8-bit cells)
└── open8_spi              (src/open8_spi.v)   SPI master peripheral
```

| Module       | Responsibility                                                            |
|--------------|---------------------------------------------------------------------------|
| `open8_top`  | Wires core to memories; decodes the I/O map; exposes debug + status       |
| `open8_core` | Fetch, decode (`casez`), register file, ALU, flag logic, PC sequencing    |
| `open8_pmem` | Holds the program; two combinational read ports (current + next word)     |
| `open8_dmem` | Byte-addressable scratch RAM for `LDS`/`STS`                              |
| `open8_spi`  | MSB-first SPI master (clock divider, CPOL/CPHA, software chip-select)      |

## Execution model

Because both memories are **combinational-read**, a complete instruction is
fetched, decoded, executed and committed in a single clock period:

1. **Fetch** — `pmem_addr_a = PC` and `pmem_addr_b = PC+1` are driven
   combinationally, returning the instruction word `ir` (and the following
   word `ir2`, used by two-word instructions).
2. **Decode** — a single `casez(ir)` statement classifies the opcode and
   produces all control signals (register addresses, write-enables, ALU
   operation, memory/I-O strobes, branch decision).
3. **Execute** — the ALU computes the result and the new flags; for `LDS` the
   SRAM read data is already valid (async read), for `STS` the write is queued.
4. **Commit** — on the rising clock edge the register file, `SREG`, `PC` and
   (for stores) the SRAM are updated together.

There is **no pipeline and therefore no hazard logic** — the simplest possible
control. Two-word instructions (`LDS`, `STS`) still complete in one cycle by
reading the second program word through the ROM's second port and advancing
`PC` by 2.

### Next-PC selection

| Instruction class      | Next PC                          |
|------------------------|----------------------------------|
| Most instructions      | `PC + 1`                         |
| `LDS` / `STS`          | `PC + 2`                         |
| `RJMP k`               | `PC + 1 + sext12(k)`             |
| `BREQ/BRNE/BRCS/BRCC`  | taken: `PC + 1 + sext7(k)`       |
| `SLEEP`                | `PC` (frozen; `halted` asserted) |

## Register file & status register

* 32 general-purpose 8-bit registers, two asynchronous read ports and one
  synchronous write port.
* Immediate instructions (`LDI`, `SUBI`, `ORI`, `ANDI`, `CPI`) address only
  `R16..R31`, matching the AVR encoding (`dddd` → `R{16+dddd}`).
* The X/Y/Z 16-bit index pairs are register aliases (`R27:R26`, `R29:R28`,
  `R31:R30`); indirect addressing instructions are **not yet implemented**.

`SREG` bit layout (bit 0 = LSB):

| Bit | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
|-----|---|---|---|---|---|---|---|---|
| Flag| I | T | H | S | V | N | Z | C |

Flags are computed per the AVR semantics:

* **Add/Sub** update `C Z N V S H`; `V` is two's-complement overflow,
  `S = N ⊕ V`, `H` is the nibble carry.
* **`SBC`/`CPC`** keep `Z` *sticky* (`Z' = Z & (result==0)`).
* **Logic ops** clear `V`, set `N`/`Z`/`S`, leave `C`/`H` unchanged.
* **Shifts** route the shifted-out bit into `C` and recompute `V = N ⊕ C`.

## Memory & I/O map

| Space            | Range            | Access                          |
|------------------|------------------|---------------------------------|
| Program (ROM)    | word 0 … 4095    | fetched by PC; `LPM` not impl.  |
| Data (SRAM)      | byte 0x000 … 0xFFF | `LDS`/`STS` (low 12 addr bits)|
| GPIO banks       | I/O addr `0 … IO_PORTS-1` | each address is an 8-bit port; addr `k` maps to pins `[8k+7 : 8k]`. `OUT` writes `port_out[k]` (+1-cycle `port_out_we[k]` strobe), `IN` reads `port_in[k]` |
| SPI data         | I/O addr `IO_PORTS+0` | `OUT` loads a byte and starts a transfer; `IN` reads the last received byte |
| SPI status       | I/O addr `IO_PORTS+1` | `IN` reads `{7'b0, busy}` (bit 0 = transfer in progress) |
| SPI control      | I/O addr `IO_PORTS+2` | `OUT` sets `[2:0]`=CLKDIV, `[3]`=CPOL, `[4]`=CPHA, `[5]`=CS_N |

`IO_PORTS` is a parameter of `open8_top` (default **32**, i.e. up to **256
GPIO output pins**). The SPI registers always sit immediately after the GPIO
region, so with the default they live at I/O addresses **32, 33, 34**. The I/O
address field is 6 bits, so the GPIO banks plus SPI comfortably fit within the
64-address space.

### SPI master

`open8_spi` is a minimal full-duplex SPI **master**:

* MSB-first, 8 bits per transfer.
* `sck` half-period = `(CLKDIV + 1)` core clocks → `sck = clk / (2·(CLKDIV+1))`.
* All four SPI modes via `CPOL`/`CPHA`.
* `cs_n` is driven straight from the control-register `CS_N` bit, so software
  frames multi-byte transactions itself (assert, send N bytes, deassert).
* No interrupts yet — software polls the `busy` bit in SPI status and reads the
  received byte from SPI data once it clears.

On the iCESugar 40 the pins map to the board's SPI header
(`SS=16, SCK=15, MOSI=17, MISO=14`). See `example/spi/spi.s` for a complete
configure → transmit → poll → receive sequence, and `doc/SPI.md` for the full
design, register details, and integration steps.

## Implemented instruction subset

Encodings follow the draft in `instruction.md` (which mirrors AVR).

| Group      | Mnemonics                                              |
|------------|-------------------------------------------------------|
| ALU (R,R)  | `ADD ADC SUB SBC AND OR EOR MOV CP CPC`               |
| Immediate  | `LDI SUBI ORI ANDI CPI`                               |
| Unary      | `COM NEG SWAP INC DEC ASR LSR ROR` (`LSL/ROL` = `ADD/ADC Rd,Rd`) |
| Flow       | `RJMP BREQ BRNE BRCS BRCC`                            |
| Memory     | `LDS STS`                                             |
| I/O        | `IN OUT`                                              |
| Control    | `NOP SEI CLI SLEEP`                                   |

Opcode word layout used by the decoder and the assembler (`tools/asm.py`):

| Pattern (16 bits)        | Instruction(s)                                  |
|--------------------------|-------------------------------------------------|
| `0000 11rd dddd rrrr`    | `ADD`                                            |
| `0001 11rd dddd rrrr`    | `ADC`                                            |
| `0001 10rd dddd rrrr`    | `SUB`                                            |
| `0000 10rd dddd rrrr`    | `SBC`                                            |
| `0001 01rd dddd rrrr`    | `CP`                                             |
| `0000 01rd dddd rrrr`    | `CPC`                                            |
| `0010 00rd dddd rrrr`    | `AND`                                            |
| `0010 01rd dddd rrrr`    | `EOR`                                            |
| `0010 10rd dddd rrrr`    | `OR`                                             |
| `0010 11rd dddd rrrr`    | `MOV`                                            |
| `1110 KKKK dddd KKKK`    | `LDI`                                            |
| `0101 KKKK dddd KKKK`    | `SUBI`                                           |
| `0110 KKKK dddd KKKK`    | `ORI`                                            |
| `0111 KKKK dddd KKKK`    | `ANDI`                                           |
| `0011 KKKK dddd KKKK`    | `CPI`                                            |
| `1001 010d dddd 0000/1/2`| `COM`/`NEG`/`SWAP`                               |
| `1001 010d dddd 0011/1010`| `INC`/`DEC`                                     |
| `1001 010d dddd 0101/6/7`| `ASR`/`LSR`/`ROR`                                |
| `1001 000d dddd 0000`+w  | `LDS Rd, k`                                       |
| `1001 001d dddd 0000`+w  | `STS k, Rr`                                       |
| `1011 0AAd dddd AAAA`    | `IN Rd, P`                                        |
| `1011 1AAr rrrr AAAA`    | `OUT P, Rr`                                       |
| `1111 00kk kkkk kbbb`    | `BRBS` (`BREQ` b=1, `BRCS` b=0)                   |
| `1111 01kk kkkk kbbb`    | `BRBC` (`BRNE` b=1, `BRCC` b=0)                   |
| `1100 kkkk kkkk kkkk`    | `RJMP`                                            |
| `1001 0101 1000 1000`    | `SLEEP`                                           |
| `1001 0100 0/1111 1000`  | `SEI` / `CLI`                                     |
| `0000 0000 0000 0000`    | `NOP`                                             |

## Debug & verification

* A **read-only debug port** (`dbg_addr → dbg_data`, plus `dbg_pc`,
  `dbg_sreg`) lets the C++ testbench inspect any register and processor state
  without depending on Verilator-internal symbol names.
* `tools/asm.py` is a two-pass assembler that turns the selected example
  (e.g. `example/program/program.s` or `example/blink/blink.s`) into the
  `$readmemh` image `program.hex` at the project root.
* `tb/sim_main.cpp` clocks the core until `halted`, checks register / flag /
  port results, and writes a `open8.vcd` waveform.

```
make                    # assemble + verilate + build + run (writes open8.vcd)
make hex                # re-assemble the selected example (EXAMPLE=...) into program.hex
make EXAMPLE=blink hex  # select a different example under example/
make wave               # run then open the VCD in gtkwave
make clean              # remove build artifacts
```

## Limitations & roadmap

The current core is intentionally minimal. Features from the Open8 spec that
are **not yet implemented**:

* Stack & subroutines: `PUSH`/`POP`/`CALL`/`RET`/`RCALL` and the stack pointer.
* Indirect addressing through X/Y/Z (`LD`/`ST`, pre-dec / post-inc, `LPM`).
* Interrupt subsystem (`interrupt.md`): IVT, `RETI`, `INTF`/`INTE`, context save.
* Timers / counters and PWM (`timer.md`).
* `MUL`, multi-word `JMP`/`CALL`, and the EEPROM / power-management modes.

Natural next step: add the stack + interrupt path, then a Timer0 peripheral
driving a compare-match interrupt — which together exercise most of the
remaining spec.
