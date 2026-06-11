// Data memory (SRAM): 8-bit cells, asynchronous read, synchronous write.
module open8_dmem #(
    parameter ADDR_W   = 12,   // 4 KB
    parameter BUS_W    = 16
)(
    input  wire              clk,
    /* verilator lint_off UNUSEDSIGNAL */
    input  wire [BUS_W-1:0]  addr,
    /* verilator lint_on UNUSEDSIGNAL */
    input  wire              we,
    input  wire [7:0]        wdata,
    output wire [7:0]        rdata
);
    reg [7:0] mem [0:(1<<ADDR_W)-1];

    integer i;
    initial for (i = 0; i < (1<<ADDR_W); i = i + 1) mem[i] = 8'h00;

    wire [ADDR_W-1:0] a = addr[ADDR_W-1:0];

    always @(posedge clk) if (we) mem[a] <= wdata;

    assign rdata = mem[a];
endmodule
