![](/banner.png)

# Open8: Open Source 8-bit Microcontroller Architecture

> **Note**: This is a minimal, work-in-progress implementation of an AVR-inspired 8-bit soft core.
> The current core supports a useful subset of instructions (LDI, arithmetic/logic, OUT/IN, STS/LDS,
> branches, RJMP, SLEEP, etc.) and a single 8-bit I/O port. Many AVR features (stack, interrupts,
> timers, indirect addressing, subroutines) are not yet implemented. See `doc/` for the current state.

## Architecture Goals
- Low power consumption and cost
- Easy to learn and develop
- Flexible I/O configuration
- Support for modern toolchains

## Core Processor (current implementation)
- 8-bit RISC, most instructions execute in a single cycle
- 16-bit Program Counter (PC)
- 32 general-purpose 8-bit registers (R0–R31)
- 2-stage pipeline (fetch, execute)
- Harvard architecture (separate program and data memories)

## Memory (current)
- Program memory loaded from `program.hex` via `$readmemh`
- Small data memory (see `src/open8_dmem.v`)
- One 8-bit I/O port at address 0 (`OUT 0, Rn` / `IN Rn, 0`)

## Current peripherals
- Single 8-bit output port (drives LEDs on supported boards)
- Internal HFOSC (~48 MHz) on iCE40
- Synchronised reset

## Instruction set (current subset)
- LDI, MOV, arithmetic, logic, shifts
- OUT / IN (I/O port 0)
- STS / LDS (direct data memory)
- RJMP, conditional branches (BRNE, BREQ, etc.)
- SLEEP, NOP, SEI/CLI
- Assembler pseudos: CLR, SER, LSL, ROL, TST, RJMP (label)

See `doc/instruction.md`, `doc/register.md`, and `doc/architecture.md` for details.

# Architecture

## Project structure

```
Semi8/
├── Makefile                 # Top-level: simulation, hex generation, FPGA delegation
├── tools/asm.py             # Two-pass assembler (emits program.hex for $readmemh)
├── src/                     # Portable Open8 soft core (board-agnostic)
│   ├── open8_top.v
│   ├── open8_core.v
│   ├── open8_pmem.v
│   └── open8_dmem.v
├── tb/                      # Verilator testbench (C++)
├── boards/
│   ├── icesugar40/          # First supported board (iCE40UP5K)
│   │   ├── top.v            # Board wrapper + clock/reset + pin mapping
│   │   ├── constr/pins.pcf
│   │   └── Makefile
│   └── common/rtl/          # Reusable modules (e.g. reset_synchronizer)
├── example/
│   ├── program/             # Classic demo (sum 1..10 → 0x37 on port 0)
│   │   └── program.s
│   └── blink/               # Simple "alive" demo: toggles a pin/LED forever
│       └── blink.s
├── doc/                     # Architecture, instruction set, registers, etc.
└── program.hex              # Always produced here (stable interface for RTL + boards)
```

**Key rule**: `make hex` (or any build) always assembles the selected example into `program.hex` at the project root. This file is used by `src/open8_pmem.v` (`$readmemh`) and copied by board Makefiles. Never edit `program.hex` by hand.

## Running on real FPGA hardware

The RTL sources under `src/` (open8_top, core, memories) are completely board-agnostic.
All board-specific code (clock/reset primitives, pin mapping, constraints, and board Makefile)
lives under `boards/<boardname>/`.

### Quick start (IceSugar 40)

```sh
# 1) Assemble the default example into program.hex (at project root)
make hex

# 2) Build the FPGA bitstream (runs inside Docker: yosys + nextpnr-ice40 + icepack)
make BOARD=icesugar40 bitstream

# 3) Program the FPGA (iCELink USB mass-storage — just copy the .bin; no icesprog/iceprog needed)
make BOARD=icesugar40 prog
```

Select a different example program (see `example/` directory):

```sh
make hex                          # default: example/program/program.s
make EXAMPLE=blink hex            # select blink demo

make EXAMPLE=blink BOARD=icesugar40 bitstream
make EXAMPLE=blink BOARD=icesugar40 prog   # iCELink mass-storage copy (no icesprog)
```

Run the Verilator simulation instead:

```sh
make            # build + run simulation (produces open8.vcd)
make wave       # run simulation then open waveform in gtkwave
```

See `boards/icesugar40/README.md` for prerequisites, how to edit the pin constraints
(`constr/pins.pcf` — you **must** put the correct pins for your board), LED polarity,
clock/reset details, and troubleshooting.

Other useful targets:

```sh
make clean       # remove simulation artifacts and program.hex
make fpga-clean  # clean only FPGA build artifacts for the selected BOARD
```

### Available examples

| Example            | Source                        | Behavior                                      |
|--------------------|-------------------------------|-----------------------------------------------|
| `program` (default)| `example/program/program.s`   | Computes sum 1..10 (= 0x37), writes to port 0, then `SLEEP` |
| `blink`            | `example/blink/blink.s`       | Infinite loop toggling bit 0 of port 0 (visible blink on led0) |

Add your own by creating `example/myprog/myprog.s` (or `example/myprog/program.s`) and running `make EXAMPLE=myprog ...`.

### Adding support for another FPGA

1. Create `boards/yourboard/` (copy the icesugar40 layout as a template).
2. Implement `top.v` (instantiate `open8_top`, add your FPGA's oscillator/PLL/reset sync).
3. Provide `constr/pins.pcf` and a `Makefile` with yosys/nextpnr/icepack (or vendor tools) rules.
4. Share reusable modules in `boards/common/rtl/`.
5. The root `Makefile` already dispatches `make BOARD=yourboard bitstream` etc.

The first supported board is `icesugar40` (iCE40UP5K-SG48).

# Dev notes

> If your verilator or clang is too old, can't get this project compile. I am using verilator 5.049 and clang 22 by homebrew

