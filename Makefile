# Open8 soft core - Verilator build
#
#   make        build + run the simulation (writes open8.vcd)
#   make hex    (re)assemble program.s -> program.hex
#   make wave   run, then open the waveform in gtkwave
#   make clean  remove build artifacts

TOP      := open8_top
SRC      := src/open8_top.v src/open8_core.v src/open8_pmem.v src/open8_dmem.v
TB       := tb/sim_main.cpp
HEX      := program.hex
ASM      := program.s

VERILATOR ?= verilator
PYTHON    ?= python3

OBJ_DIR  := obj_dir
VCD      := open8.vcd

.PHONY: all run hex wave clean

all: run

# Assemble the demo program (only if python is available / source changed)
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
	rm -rf $(OBJ_DIR) $(VCD)
