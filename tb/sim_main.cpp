// Verilator testbench for the Open8 soft core.
// Runs the assembled program until the core halts (SLEEP) and checks results.

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vopen8_top.h"

static Vopen8_top*   dut   = nullptr;
static VerilatedVcdC* trace = nullptr;
static vluint64_t    main_time = 0;

double sc_time_stamp() { return main_time; }

static void tick() {
    // falling edge
    dut->clk = 0;
    dut->eval();
    if (trace) trace->dump(main_time);
    main_time++;
    // rising edge
    dut->clk = 1;
    dut->eval();
    if (trace) trace->dump(main_time);
    main_time++;
}

static uint8_t read_reg(int idx) {
    dut->dbg_addr = idx & 0x1F;
    dut->eval();
    return dut->dbg_data;
}

static int g_fail = 0;

static void check(const char* name, uint32_t got, uint32_t exp) {
    bool ok = (got == exp);
    if (!ok) g_fail++;
    printf("  [%s] %-12s got=0x%02X (%u) expected=0x%02X (%u)\n",
           ok ? "PASS" : "FAIL", name, got, got, exp, exp);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vopen8_top;

    // Enable VCD tracing (file name overridable: +trace=name.vcd)
    Verilated::traceEverOn(true);
    const char* vcd_name = "open8.vcd";
    for (int i = 1; i < argc; i++) {
        if (strncmp(argv[i], "+trace=", 7) == 0) vcd_name = argv[i] + 7;
    }
    trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open(vcd_name);

    dut->clk = 0;
    dut->rst_n = 0;
    dut->port_in = 0;
    dut->dbg_addr = 0;

    // hold reset
    for (int i = 0; i < 3; i++) tick();
    dut->rst_n = 1;

    // run until halt or timeout
    const int MAX_CYCLES = 100000;
    int cycles = 0;
    uint8_t port_out_seen = 0;
    bool port_out_valid = false;
    while (!dut->halted && cycles < MAX_CYCLES) {
        tick();
        if (dut->port_out_we) {
            port_out_seen = dut->port_out;
            port_out_valid = true;
        }
        cycles++;
    }

    printf("Open8 simulation finished after %d cycles (halted=%d, pc=0x%04X)\n",
           cycles, (int)dut->halted, (unsigned)dut->dbg_pc);

    if (!dut->halted) {
        printf("  [FAIL] core did not halt within %d cycles\n", MAX_CYCLES);
        g_fail++;
    }

    printf("Register / state checks:\n");
    check("R16 sum",   read_reg(16), 55);
    check("R17 i",     read_reg(17), 11);
    check("R19 ldsbk", read_reg(19), 55);
    check("R20 swap",  read_reg(20), 0xF0);
    check("R21 lsr",   read_reg(21), 0x40);
    check("SREG.C",    dut->dbg_sreg & 0x01, 1);
    check("port_out",  port_out_valid ? port_out_seen : 0xFFFF, 55);

    if (trace) {
        trace->close();
        delete trace;
        printf("Waveform written to %s\n", vcd_name);
    }
    dut->final();
    delete dut;

    if (g_fail == 0) {
        printf("\nALL CHECKS PASSED\n");
        return 0;
    }
    printf("\n%d CHECK(S) FAILED\n", g_fail);
    return 1;
}
