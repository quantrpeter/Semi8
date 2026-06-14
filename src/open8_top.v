// Open8 SoC top: CPU core + program ROM + data SRAM + banked GPIO + SPI master.
//
// I/O address map (selected by the OUT/IN address field, 6 bits):
//   0 .. IO_PORTS-1   8-bit GPIO banks  (addr k -> pins [8k+7 : 8k])
//                     With IO_PORTS=32 this is up to 256 output pins.
//   IO_PORTS + 0      SPI_DATA  (write: load+start transfer / read: rx byte)
//   IO_PORTS + 1      SPI_STAT  (read: bit0 = busy)
//   IO_PORTS + 2      SPI_CTRL  (write: clkdiv/CPOL/CPHA/CS_N)
module open8_top #(
    parameter PROG_ADDR_W = 12,
    parameter DATA_ADDR_W = 16,
    parameter DMEM_ADDR_W = 12,
    parameter IO_PORTS    = 32,            // number of 8-bit GPIO banks (<=32 -> up to 256 pins)
    parameter PROG_INIT   = "program.hex"
)(
    input  wire        clk,
    input  wire        rst_n,

    // Banked GPIO. Bank k occupies bits [8k +: 8] of these flattened buses.
    input  wire [IO_PORTS*8-1:0] port_in,
    output reg  [IO_PORTS*8-1:0] port_out,
    output reg  [IO_PORTS-1:0]   port_out_we,   // per-bank 1-cycle write strobe

    // SPI master (I/O addresses IO_PORTS + 0..2)
    output wire        spi_sck,
    output wire        spi_mosi,
    input  wire        spi_miso,
    output wire        spi_cs_n,

    // status + debug
    output wire        halted,
    input  wire [4:0]  dbg_addr,
    output wire [7:0]  dbg_data,
    output wire [7:0]  dbg_sreg,
    output wire [15:0] dbg_pc
);
    // Width of the bank-select index taken from io_addr (e.g. 5 bits for 32 banks).
    localparam IO_IDX_W = (IO_PORTS <= 1) ? 1 : $clog2(IO_PORTS);
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

    // I/O address map. GPIO banks occupy addresses 0..IO_PORTS-1; the SPI
    // registers follow immediately after the GPIO region.
    localparam [5:0] IO_SPI_DATA = IO_PORTS[5:0];          // SPI data (write=start, read=rx)
    localparam [5:0] IO_SPI_STAT = IO_PORTS[5:0] + 6'd1;   // SPI status (bit0 = busy)
    localparam [5:0] IO_SPI_CTRL = IO_PORTS[5:0] + 6'd2;   // SPI control register

    // GPIO bank select: an OUT/IN address below IO_PORTS targets a GPIO bank.
    wire                   io_is_gpio = (io_addr < IO_PORTS[5:0]);
    wire [IO_IDX_W-1:0]    bank = io_addr[IO_IDX_W-1:0];

    // SPI read-back / strobes
    wire [7:0]             spi_rx;
    wire                   spi_busy;
    wire                   spi_ctrl_we = io_we && (io_addr == IO_SPI_CTRL);
    wire                   spi_data_we = io_we && (io_addr == IO_SPI_DATA);

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

    // SPI master peripheral (I/O addresses IO_PORTS + 0..2). Writes to
    // SPI_CTRL / SPI_DATA arrive as one-cycle strobes; reads come back through
    // the I/O read mux.
    open8_spi u_spi (
        .clk(clk), .rst_n(rst_n),
        .ctrl_we(spi_ctrl_we),
        .data_we(spi_data_we),
        .wdata(io_wdata),
        .rx_data(spi_rx),
        .busy(spi_busy),
        .sck(spi_sck), .mosi(spi_mosi), .miso(spi_miso), .cs_n(spi_cs_n)
    );

    // I/O read mux: GPIO banks read back the corresponding input pins; the SPI
    // registers return rx data / busy status.
    always @* begin
        if (io_is_gpio)
            io_rdata = port_in[bank*8 +: 8];
        else if (io_addr == IO_SPI_DATA)
            io_rdata = spi_rx;
        else if (io_addr == IO_SPI_STAT)
            io_rdata = {7'b0, spi_busy};
        else
            io_rdata = 8'h00;
    end

    // I/O write capture: OUT to a GPIO bank updates that bank's 8 output pins
    // and pulses its 1-cycle write strobe. (SPI writes are handled by the
    // peripheral via spi_ctrl_we / spi_data_we.)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            port_out    <= {(IO_PORTS*8){1'b0}};
            port_out_we <= {IO_PORTS{1'b0}};
        end else begin
            port_out_we <= {IO_PORTS{1'b0}};
            if (io_we && io_is_gpio) begin
                port_out[bank*8 +: 8] <= io_wdata;
                port_out_we[bank]     <= 1'b1;
            end
        end
    end
endmodule
