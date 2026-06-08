![](/banner.png)

# Open8: Open Source 8-bit Microcontroller Architecture

## Architecture Goals
- Low power consumption and cost
- Easy to learn and develop
- Flexible I/O configuration
- Support for modern toolchains

## Core Processor
- 8-bit RISC instruction set, most instructions execute in a single cycle
- 16-bit Program Counter (PC), supporting 64KB program space
- 32 general-purpose 8-bit registers (R0–R31)
- 2-stage pipeline (fetch, execute)

## Memory Architecture
- Separate program memory (Flash) and data memory (SRAM)
- 2KB–8KB SRAM (depending on model)
- 16KB–64KB Flash
- 256B EEPROM (optional)

## I/O and Peripherals
- 32 programmable I/O pins
- Two 8-bit timers/counters (with PWM)
- One 16-bit timer/counter
- SPI, I2C, and UART interfaces
- 8-channel 10-bit ADC
- External interrupt support

## Instruction Set Features
- AVR-inspired, compact and easy to decode
- Bit manipulation, shift, arithmetic, and logic operations
- Direct, indirect, and immediate addressing modes
- Multiple jump and branch instructions

## Power Management
- Multiple power-saving modes (Idle, Power-down, Standby)
- 1.8V–5.5V operating voltage

## Development Tools
- GCC/LLVM support
- Open-source simulator
- Standard JTAG/SWD debug interface

# Architecture

## Running on real FPGA hardware

The RTL sources under `src/` (open8_top, core, memories) are completely board-agnostic.
All board-specific code (clock/reset primitives, pin mapping, constraints, and board Makefile)
lives under `boards/<boardname>/`.

### Quick start (IceSugar 40)

```sh
make hex                       # assemble program.s -> program.hex
make BOARD=icesugar40 bitstream
make BOARD=icesugar40 prog     # requires iceprog + USB connection
```

See `boards/icesugar40/README.md` for prerequisites, how to edit the pin constraints
(`constr/pins.pcf` — you **must** put the correct pins for your board), LED polarity,
clock/reset details, and troubleshooting.

### Adding support for another FPGA

1. Create `boards/yourboard/` (copy the icesugar40 layout as a template).
2. Implement `top.v` (instantiate `open8_top`, add your FPGA's oscillator/PLL/reset sync).
3. Provide `constr/pins.pcf` and a `Makefile` with yosys/nextpnr/icepack (or vendor tools) rules.
4. Share reusable modules in `boards/common/rtl/`.
5. The root `Makefile` already dispatches `make BOARD=yourboard bitstream` etc.

The first supported board is `icesugar40` (iCE40UP5K-SG48).

