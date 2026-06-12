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
#   make BOARD=icesugar40 fpga-clean          (clean only FPGA/board artifacts)
#   make EXAMPLE=blink BOARD=icesugar40 fpga-clean bitstream prog
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

# ---------------------------------------------------------------------------
# macOS ccache + Verilator workaround
# On macOS many developers have Homebrew ccache installed and prepended to PATH
# (e.g. export PATH="/opt/homebrew/opt/ccache/libexec:$PATH" or the Intel equiv).
# When ccache acts as the compiler for the many small .cpp files that Verilator
# generates and then ar's into V...__ALL.a, it can leave "manifest" entries in
# the archive. Apple's ld then prints:
#   ld: archive member '/' not a mach-o file in 'Vopen8_top__ALL.a'
# The only reliable automatic fix is to force the *real* Apple clang/clang++
# (bypassing any PATH wrapper) and to disable all forms of caching for this
# particular target. We do this only on Darwin so Linux/CI builds are unaffected.
# ---------------------------------------------------------------------------
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
  VERILATOR_REAL_CC := CC=/usr/bin/clang CXX=/usr/bin/clang++
else
  VERILATOR_REAL_CC :=
endif

.PHONY: all run hex wave clean bitstream prog fpga-clean

all: run

# Assemble the selected example into program.hex at the project root.
# (program.hex is the stable interface used by open8_pmem.v $readmemh and board rules.)
hex: $(HEX)

$(HEX): $(ASM) tools/asm.py
	$(PYTHON) tools/asm.py $(ASM) $(HEX)

# Build the Verilated model and the C++ testbench (with VCD tracing)
# We force-remove $(OBJ_DIR) first. This avoids a common macOS + ccache +
# Verilator problem that produces a corrupt .a ("archive member '/' not a mach-o file").
# We also disable ccache via OBJCACHE="" and CCACHE_DISABLE=1.
#
# On macOS we do a two-phase build (verilator --cc to generate, then explicit make)
# and force the real Apple clang/ar/ranlib so that no ccache wrapper (even if first
# in PATH) can corrupt the archive with manifest entries.  The inner make is where
# the .o -> .a archiving and final link happen, so we must pass CC/CXX/AR/RANLIB
# to that make invocation.
$(OBJ_DIR)/V$(TOP): $(SRC) $(TB) $(HEX)
	@rm -rf $(OBJ_DIR)
ifeq ($(UNAME_S),Darwin)
	# macOS + Homebrew ccache + Apple ld workaround.
	# ccache wrappers in PATH can cause ar to embed non-mach-o "manifest" entries
	# into the static library, leading to:
	#   ld: archive member '/' not a mach-o file in 'Vopen8_top__ALL.a'
	# Strategy:
	#   * Sanitize PATH so /usr/bin (real Apple clang/ar) is found first.
	#   * Pass CC/CXX/AR/RANLIB/LD both in the environment for the verilator
	#     generation phase (so the generated V*.mk embeds sane tool paths) and,
	#     crucially, on the *command line* to the inner $(MAKE) so they have
	#     higher precedence than any assignments inside the generated makefile.
	#   * Disable all ccache via OBJCACHE and CCACHE_DISABLE.
	#   * Use a two-phase build (verilator --cc --exe, then explicit make) so we
	#     can control the compile/link environment precisely.
	OBJCACHE="" CCACHE_DISABLE=1 \
	PATH="/usr/bin:/bin:/usr/sbin:/sbin:$$PATH" \
	CC=/usr/bin/clang CXX=/usr/bin/clang++ AR=/usr/bin/ar RANLIB=/usr/bin/ranlib LD=/usr/bin/clang++ \
	$(VERILATOR) --cc --exe -j 0 \
		-Wall -Wno-fatal -Wno-WIDTHTRUNC -Wno-UNUSEDSIGNAL \
		--trace \
		--top-module $(TOP) \
		-Isrc \
		$(SRC) $(TB) \
		-o V$(TOP)
	OBJCACHE="" CCACHE_DISABLE=1 \
	PATH="/usr/bin:/bin:/usr/sbin:/sbin:$$PATH" \
	$(MAKE) -C $(OBJ_DIR) -f V$(TOP).mk \
		CC=/usr/bin/clang CXX=/usr/bin/clang++ \
		AR=/usr/bin/ar RANLIB=/usr/bin/ranlib LD=/usr/bin/clang++ \
		OBJCACHE="" CCACHE_DISABLE=1
else
	OBJCACHE="" CCACHE_DISABLE=1 $(VERILATOR) --cc --exe --build -j 0 \
		-Wall -Wno-fatal -Wno-WIDTHTRUNC \
		--trace \
		--top-module $(TOP) \
		-Isrc \
		$(SRC) $(TB) \
		-o V$(TOP)
endif

run: $(OBJ_DIR)/V$(TOP)
	./$(OBJ_DIR)/V$(TOP) +example=$(EXAMPLE)

wave: run
	gtkwave $(VCD)

clean: fpga-clean
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

bitstream:
	$(MAKE) -C boards/$(BOARD) $@

# Always assemble the selected example before delegating to the board for programming.
# This guarantees that the latest blink.s (or program.s) ends up in the bitstream
# even if the user just did "make EXAMPLE=blink BOARD=icesugar40 prog".
prog: hex
	$(MAKE) -C boards/$(BOARD) $@

fpga-clean:
	$(MAKE) -C boards/$(BOARD) clean
