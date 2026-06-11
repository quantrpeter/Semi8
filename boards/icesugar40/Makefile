# Makefile for IceSugar 40 (iCE40 UltraPlus 5K - SG48) board
#
# Synthesizes the Open8 soft core + board wrapper to a bitstream using Docker.
# Programming (USB) runs on the host.
#
# The portable core lives in ../../src/. This board only adds:
#   - top.v (clock, reset, pin mapping)
#   - constr/pins.pcf
#
# Usage (recommended from project root):
#   make hex
#   make BOARD=icesugar40 bitstream
#   make BOARD=icesugar40 prog
#
# Or from inside this directory (after ensuring program.hex exists in root):
#   make
#   make prog
#
# Toolchain is provided by your Docker image (no need to install yosys/nextpnr locally).
# See the reference pattern you provided (buildDocker + inner "build" target).

TOP       := top
RTL       := top.v \
             ../../src/open8_top.v \
             ../../src/open8_core.v \
             ../../src/open8_pmem.v \
             ../../src/open8_dmem.v \
             ../common/rtl/reset_synchronizer.v
PCF       := constr/pins.pcf
BUILD_DIR := build
JSON      := $(BUILD_DIR)/$(TOP).json
ASC       := $(BUILD_DIR)/$(TOP).asc
BIN       := $(BUILD_DIR)/$(TOP).bin

# We copy the program image locally so $readmemh("program.hex") inside
# open8_pmem.v finds it when Yosys elaborates from this directory.
PROG_HEX  := program.hex

YOSYS     ?= yosys
NEXTPNR   ?= nextpnr-ice40
ICEPACK   ?= icepack

# iCELink programming via USB mass-storage (no icesprog / ICEPROG needed).
# The board appears as a drive named iCELink (or similar). We copy the .bin to it.
ICELINK_DIR := $(shell df | grep -i iCELink | awk '{print $$NF}')
$(warning iCELink path: $(ICELINK_DIR))

# Docker image containing the iCE40 toolchain (yosys, nextpnr-ice40, icepack, etc.)
# for IceSugar 40 / IceSugar Pro. Mount the full project root so relative paths
# (../../src/*.v, program.hex, etc.) resolve correctly inside the container.
DOCKER_IMAGE ?= quantrpeter/ice40:latest
PROJECT_ROOT := $(abspath ../..)
DOCKER_RUN   := docker run --rm -v $(PROJECT_ROOT):/work -w /work $(DOCKER_IMAGE)

.PHONY: all bitstream bitstream-inner build bitstream-native prog clean hex

all: bitstream

# Ensure the selected example is assembled into program.hex at the project root.
# Delegates to the root Makefile, which respects EXAMPLE= (default: program).
#   make EXAMPLE=blink BOARD=icesugar40 bitstream
hex:
	$(MAKE) -C ../.. hex

# Bring a fresh copy of the hex into this dir for the memory initializer
$(PROG_HEX): ../../program.hex
	cp -f $< $@

$(JSON): $(RTL) $(PCF) $(PROG_HEX)
	mkdir -p $(BUILD_DIR)
	$(YOSYS) -p "synth_ice40 -top $(TOP) -json $(JSON)" $(RTL)

$(ASC): $(JSON) $(PCF)
	# --pcf-allow-unconstrained is required because the onboard RGB LED
	# (LED_R / LED_G / LED_B) is driven exclusively by the SB_RGBA_DRV
	# hard IP primitive. The primitive automatically claims the dedicated
	# RGB package pins; we intentionally do NOT put set_io lines for them
	# in pins.pcf. Without this flag nextpnr refuses to load the PCF.
	$(NEXTPNR) --up5k --package sg48 --pcf $(PCF) --json $(JSON) --asc $(ASC) --pcf-allow-unconstrained

$(BIN): $(ASC)
	$(ICEPACK) $(ASC) $(BIN)

# ---------------------------------------------------------------------------
# Docker-based FPGA flow (synthesis inside container, programming on host)
# ---------------------------------------------------------------------------

# Inner target: the actual yosys / nextpnr / icepack work.
# This is what gets executed *inside* the Docker container (tools are in PATH there).
# The JSON/ASC/BIN rules above run when this target is requested from inside Docker.
bitstream-inner: $(BIN)

# Convenience alias to match common patterns (your reference uses "build").
build: bitstream-inner

# Default bitstream target (what root Makefile and users invoke).
# Ensures the program is assembled on the host (python), then runs the inner
# synthesis inside your quantrpeter/ice40:latest image.
bitstream: hex
	$(DOCKER_RUN) make -C /work/boards/icesugar40 bitstream-inner

# Bypass Docker completely (only if you have native tools on the host).
bitstream-native: $(BIN)

# Program the FPGA via iCELink (USB mass-storage).
# The board appears as a drive (usually named iCELink). We simply copy the .bin to it.
# This matches the "prog_flash" pattern from the reference (no icesprog / ICEPROG / iceprog needed).
prog: bitstream
	echo "Copying $(BIN) to iCELink drive ($(ICELINK_DIR))..."
	@if [ -d '$(ICELINK_DIR)' ]; then \
		cp $(BIN) $(ICELINK_DIR); \
	else \
		echo "iCELink not found"; \
		exit 1; \
	fi

clean:
	rm -rf $(BUILD_DIR) $(PROG_HEX)

# Note: when invoking from the project root, prefer the root target's "fpga-clean"
# (make BOARD=icesugar40 fpga-clean) so that root-level clean rules are also considered.
