# Open8 on IceSugar 40

This adds first-class support for running the Open8 8-bit soft core on an **iCE40UP5K** FPGA (IceSugar 40 or any compatible SG48-package board).

## Quick start from project root

```sh
# Assemble the included demo program (computes 1+2+...+10 = 55 = 0x37)
make hex

# Build the FPGA bitstream (runs inside your Docker image)
make BOARD=icesugar40 bitstream

# Program the FPGA over USB (iCELink mass-storage: just copy the .bin to the mounted drive)
make BOARD=icesugar40 prog
```

Select a different example (e.g. the blink demo that toggles a pin):

```sh
make EXAMPLE=blink hex
make BOARD=icesugar40 bitstream
make BOARD=icesugar40 prog
```

After reset the core starts automatically and drives the result (0x37) onto the 8-bit I/O port.  
Connect LEDs (or a logic analyzer / scope) to the pins defined in `constr/pins.pcf` to see binary `00110111`.

The synthesis (yosys + nextpnr-ice40 + icepack) runs inside the `quantrpeter/ice40:latest` container you built. Only `make hex` (Python) and the final `prog` step run on the host.

## Pin mapping (IMPORTANT — this is why your last build failed)

**Edit `constr/pins.pcf` before the first successful build.**

Your last `make BOARD=icesugar40 bitstream` reached nextpnr but then failed with:

```
ERROR: package does not have a pin named '29' (on line 21)
ERROR: Loading PCF failed.
```

The PCF now contains a set of *valid* package pins for sg48 (extracted from the chipdb inside your Docker image), but they are still just educated guesses.

**You must** replace them with the real pin numbers from your board's schematic:

1. The board matches the MuseLab iCESugar (see https://github.com/wuxx/icesugar).
2. Download the schematic PDF: https://github.com/wuxx/icesugar/tree/master/schematic → iCESugar-v1.5.pdf (or latest).
3. Look at the iCE40UP5K connections to PMOD1/PMOD2/PMOD3 and the onboard RGB LED + switch (KEY).
4. Use the QFN-48 package pin numbers (the numbers like 35, 36, ...) in the `set_io` lines.
5. There is also a pmod-led schematic if you are using the official LED PMOD.

Current (example) mapping in the file:
- `led0` … `led7` ← 8-bit `port_out` (written by `OUT 0, Rn`)
- `rst_btn`     ← reset button (active-low, press to GND)

After editing the .pcf, just re-run `make BOARD=icesugar40 bitstream` (it will be fast because yosys already ran and the JSON is cached in build/).

If your LEDs are active-low, change the `assign` statements in `top.v` from `port_out[x]` to `~port_out[x]`.

## Clock and reset

- **Clock**: Internal HFOSC running at approximately 48 MHz (divide-by-1). No external clock pin is used by default.
- **Reset**: Button input with a 2-FF synchronizer (async assert, sync deassert). The core starts cleanly after release.

## I/O port

Open8 exposes one 8-bit port at I/O address 0 (see `src/open8_top.v`):

- `OUT 0, Rxx`  → `port_out` (→ LEDs)
- `IN  Rxx, 0`  → `port_in` (tied to 0 in this wrapper)

The default demo (`example/program/program.s`) ends with `OUT 0, R16` (value 55).
Use `make EXAMPLE=blink ...` for a simple LED toggle loop that never halts.

You can easily extend `top.v` to connect real buttons, UART, SPI, etc. to `port_in` / additional logic.

## Toolchain (Docker)

All FPGA synthesis tools are provided by the Docker image you built:

```sh
docker run --rm quantrpeter/ice40:latest yosys --version
# etc.
```

- The image `quantrpeter/ice40:latest` contains yosys, nextpnr-ice40, icepack.
- `make BOARD=icesugar40 bitstream` (or `make build` inside the board dir) automatically runs the inner build inside the container using the pattern from your reference (`buildDocker` + inner `build` / `bitstream-inner`).
- Programming (`prog`) runs on the host by detecting the iCELink USB drive (via `df | grep iCELink`) and copying the `.bin` to it (same idea as the reference `prog_flash` target). No `icesprog` / `iceprog` tool is required.

Native tools on the host are no longer required for the common flow. You can still force a native build with `make BOARD=icesugar40 bitstream-native` if you have the tools installed directly.

## Root Makefile integration

The top-level `Makefile` understands:

```sh
make BOARD=icesugar40 bitstream
make BOARD=icesugar40 prog
make BOARD=icesugar40 clean   # (via fpga-clean or direct)
```

To add a completely new board (e.g. Tang Nano, ECP5, etc.):

1. `mkdir -p boards/<boardname>/constr`
2. Create `boards/<boardname>/top.v`, `constr/pins.pcf`, `Makefile`, `README.md`
3. Keep using the same `open8_top` + `src/*.v` + `common/rtl` helpers
4. The root dispatcher already works for any `BOARD=xxx`

## Troubleshooting

- `program.hex: No such file or directory` → run `make hex` from the Semi8 root first.
- Programming fails / iCELink not found → ensure the board is connected and appears as a drive (check `df | grep -i iCELink`). The `prog` target just does a `cp` to that mount point.
- LEDs show wrong pattern or inverted → fix pin numbers in `.pcf` and/or invert polarity in `top.v`.
- Want a slower / external clock → uncomment the ext_clk line in pcf and modify `top.v` to use it (add SB_PLL40 if you need a specific frequency).
- Adding more peripherals → instantiate them in `top.v` and connect to the core's I/O bus if you want to go beyond the simple 8-bit port (advanced).

Have fun running real 8-bit AVR-flavored code on cheap iCE40 hardware!
