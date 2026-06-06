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
