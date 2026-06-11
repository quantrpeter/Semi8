// Open8 SoC top: CPU core + program ROM + data SRAM + a single 8-bit I/O port.
// I/O address 0 maps to {port_out (write), port_in (read)}.
module open8_top #(
    parameter PROG_ADDR_W = 12,
    parameter DATA_ADDR_W = 16,
    parameter DMEM_ADDR_W = 12,
    parameter PROG_INIT   = "program.hex"
)(
    input  wire        clk,
    input  wire        rst_n,

    // I/O port
    input  wire [7:0]  port_in,
    output reg  [7:0]  port_out,
    output reg         port_out_we,

    // status + debug
    output wire        halted,
    input  wire [4:0]  dbg_addr,
    output wire [7:0]  dbg_data,
    output wire [7:0]  dbg_sreg,
    output wire [15:0] dbg_pc
);
    // program memory bus
    wire [PROG_ADDR_W-1:0] pa, pb;
    wire [15:0]            da, db;

    // data memory bus
    wire [DATA_ADDR_W-1:0] dmem_addr;
    wire                   dmem_we;
    wire [7:0]             dmem_wdata, dmem_rdata;

    // I/O bus
    wire                   io_we;
    wire [5:0]             io_addr;
    wire [7:0]             io_wdata;
    reg  [7:0]             io_rdata;

    open8_core #(
        .PROG_ADDR_W(PROG_ADDR_W),
        .DATA_ADDR_W(DATA_ADDR_W)
    ) core (
        .clk(clk), .rst_n(rst_n),
        .pmem_addr_a(pa), .pmem_data_a(da),
        .pmem_addr_b(pb), .pmem_data_b(db),
        .dmem_addr(dmem_addr), .dmem_we(dmem_we),
        .dmem_wdata(dmem_wdata), .dmem_rdata(dmem_rdata),
        .io_we(io_we), .io_addr(io_addr), .io_wdata(io_wdata), .io_rdata(io_rdata),
        .halted(halted),
        .dbg_addr(dbg_addr), .dbg_data(dbg_data),
        .dbg_sreg(dbg_sreg), .dbg_pc(dbg_pc)
    );

    // Named register wires at top level for easy gtkwave visibility.
    // (The core also declares these internally as R0..R31.)
    // Use open8_top.R16 (or open8_top.core.R16) in gtkwave.
    // The /*verilator public*/ attributes ensure they are preserved in VCD traces.
    wire [7:0] R0  /*verilator public*/ = core.R0,  R1  /*verilator public*/ = core.R1,  R2  /*verilator public*/ = core.R2,  R3  /*verilator public*/ = core.R3;
    wire [7:0] R4  /*verilator public*/ = core.R4,  R5  /*verilator public*/ = core.R5,  R6  /*verilator public*/ = core.R6,  R7  /*verilator public*/ = core.R7;
    wire [7:0] R8  /*verilator public*/ = core.R8,  R9  /*verilator public*/ = core.R9,  R10 /*verilator public*/ = core.R10, R11 /*verilator public*/ = core.R11;
    wire [7:0] R12 /*verilator public*/ = core.R12, R13 /*verilator public*/ = core.R13, R14 /*verilator public*/ = core.R14, R15 /*verilator public*/ = core.R15;
    wire [7:0] R16 /*verilator public*/ = core.R16, R17 /*verilator public*/ = core.R17, R18 /*verilator public*/ = core.R18, R19 /*verilator public*/ = core.R19;
    wire [7:0] R20 /*verilator public*/ = core.R20, R21 /*verilator public*/ = core.R21, R22 /*verilator public*/ = core.R22, R23 /*verilator public*/ = core.R23;
    wire [7:0] R24 /*verilator public*/ = core.R24, R25 /*verilator public*/ = core.R25, R26 /*verilator public*/ = core.R26, R27 /*verilator public*/ = core.R27;
    wire [7:0] R28 /*verilator public*/ = core.R28, R29 /*verilator public*/ = core.R29, R30 /*verilator public*/ = core.R30, R31 /*verilator public*/ = core.R31;

    open8_pmem #(
        .ADDR_W(PROG_ADDR_W), .INIT(PROG_INIT)
    ) pmem (
        .addr_a(pa), .data_a(da),
        .addr_b(pb), .data_b(db)
    );

    open8_dmem #(
        .ADDR_W(DMEM_ADDR_W), .BUS_W(DATA_ADDR_W)
    ) dmem (
        .clk(clk), .addr(dmem_addr), .we(dmem_we),
        .wdata(dmem_wdata), .rdata(dmem_rdata)
    );

    // I/O read mux
    always @* begin
        io_rdata = 8'h00;
        if (io_addr == 6'd0) io_rdata = port_in;
    end

    // I/O write capture (port 0 -> port_out, with a 1-cycle strobe)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            port_out    <= 8'h00;
            port_out_we <= 1'b0;
        end else begin
            port_out_we <= 1'b0;
            if (io_we && io_addr == 6'd0) begin
                port_out    <= io_wdata;
                port_out_we <= 1'b1;
            end
        end
    end
endmodule
