// Program memory: 16-bit words, dual asynchronous read port.
// Initialised from a hex file (one 16-bit word per line) via $readmemh.
module open8_pmem #(
    parameter ADDR_W = 12,
    parameter INIT   = "program.hex"
)(
    input  wire [ADDR_W-1:0] addr_a,
    output wire [15:0]       data_a,
    input  wire [ADDR_W-1:0] addr_b,
    output wire [15:0]       data_b
);
    reg [15:0] mem [0:(1<<ADDR_W)-1];

    // NOTE: the zero-fill loop is simulation-only. Under yosys (which defines
    // SYNTHESIS) a procedural for-loop in an initial block becomes unclocked
    // memory-write cells; that destroys the $readmemh init and the whole ROM
    // (and then the whole CPU) gets optimized away to constants. With only
    // $readmemh, yosys emits proper $meminit data and the ROM synthesizes
    // correctly (unwritten words default to 0 in hardware).
`ifndef SYNTHESIS
    integer i;
    initial for (i = 0; i < (1<<ADDR_W); i = i + 1) mem[i] = 16'h0000;
`endif
    initial $readmemh(INIT, mem);

    assign data_a = mem[addr_a];
    assign data_b = mem[addr_b];
endmodule
