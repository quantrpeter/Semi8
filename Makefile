# Open8 soft core - Verilator + FPGA build
#
# Simulation (Verilator):
#   make                    build + run the simulation (writes open8.vcd)
#   make hex                (re)assemble the selected example into program.hex
#   make EXAMPLE=blink hex  select a different example (see example/ directory)
#   make wave               run, then open the waveform in gtkwave
#   make clean              remove build artifacts
#
# FPGA (multi-board support, Docker toolchain):
#   make BOARD=icesugar40 bitstream
#   make BOARD=icesugar40 prog
#   make fpga-clean
#
# Select which example program to build by setting EXAMPLE on the command line:
#   make EXAMPLE=program BOARD=icesugar40 prog   # the classic sum demo
#   make EXAMPLE=blink   BOARD=icesugar40 prog   # LED toggle / blink demo
#
# The core in src/ is board-agnostic. Board-specific files are under boards/<name>/.
# Synthesis uses your Docker image (see boards/icesugar40/Makefile).
# See boards/icesugar40/ for the first supported target (IceSugar 40).

TOP      := open8_top
SRC      := src/open8_top.v src/open8_core.v src/open8_pmem.v src/open8_dmem.v
TB       := tb/sim_main.cpp
HEX      := program.hex

# Select which example program to build.
#   EXAMPLE=program  -> example/program/program.s
#   EXAMPLE=blink    -> example/blink/blink.s   (or example/blink/program.s as fallback)
EXAMPLE  ?= program

# Resolve the assembly source for the chosen example.
# Preferred layout: example/$(EXAMPLE)/$(EXAMPLE).s
# Fallback layout:  example/$(EXAMPLE)/program.s
EXAMPLE_DIR   := example/$(EXAMPLE)
ASM_CANDIDATE1 := $(EXAMPLE_DIR)/$(EXAMPLE).s
ASM_CANDIDATE2 := $(EXAMPLE_DIR)/program.s

ifeq ($(wildcard $(ASM_CANDIDATE1)),$(ASM_CANDIDATE1))
  ASM := $(ASM_CANDIDATE1)
else
  ASM := $(ASM_CANDIDATE2)
endif

VERILATOR ?= verilator
PYTHON    ?= python3

OBJ_DIR  := obj_dir
VCD      := open8.vcd

# Default board for FPGA targets (override on command line: make BOARD=xxx ...)
BOARD    ?= icesugar40

.PHONY: all run hex wave clean bitstream prog fpga-clean

all: run

# Assemble the selected example into program.hex at the project root.
# (program.hex is the stable interface used by open8_pmem.v $readmemh and board rules.)
hex: $(HEX)

$(HEX): $(ASM) tools/asm.py
	$(PYTHON) tools/asm.py $(ASM) $(HEX)

# Build the Verilated model and the C++ testbench (with VCD tracing)
$(OBJ_DIR)/V$(TOP): $(SRC) $(TB) $(HEX)
	$(VERILATOR) --cc --exe --build -j 0 \
		-Wall -Wno-fatal \
		--trace \
		--top-module $(TOP) \
		-Isrc \
		$(SRC) $(TB) \
		-o V$(TOP)

run: $(OBJ_DIR)/V$(TOP)
	./$(OBJ_DIR)/V$(TOP)

wave: run
	gtkwave $(VCD)

clean:
	rm -rf $(OBJ_DIR) $(VCD) $(HEX)

# ---------------------------------------------------------------------------
# FPGA board delegation (keeps src/ portable and simulation flow untouched)
# ---------------------------------------------------------------------------
#
#   make BOARD=icesugar40 bitstream
#   make BOARD=icesugar40 prog
#   make fpga-clean
#
# Board-specific files live in boards/$(BOARD)/ (top.v, constraints, local Makefile).
# The portable Open8 SoC is always instantiated from src/.

bitstream prog:
	$(MAKE) -C boards/$(BOARD) $@

fpga-clean:
	$(MAKE) -C boards/$(BOARD) clean

# Note: each board Makefile is responsible for ensuring `hex` before its own
# bitstream target (so the Docker wrapper and native paths both get a fresh image).
prog: hex
