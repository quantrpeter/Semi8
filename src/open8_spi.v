// ============================================================================
// open8_spi - minimal SPI master peripheral for the Open8 SoC.
//
// MSB-first, full-duplex, software-configurable clock divider and SPI mode
// (CPOL/CPHA). The chip-select line (cs_n) is driven directly from a control
// register bit so software can frame multi-byte transactions itself.
//
// It hangs off the same simple I/O bus as the rest of the SoC. open8_top
// decodes the I/O addresses (the SPI registers sit just after the GPIO banks,
// i.e. at IO_PORTS + 0..2, = 32/33/34 by default) and gives this module two
// one-cycle write strobes plus read-back wires:
//
//   SPI_DATA   OUT -> load TX byte and start a transfer
//              IN  -> last received byte (rx_data)
//   SPI_STAT   IN  -> { 7'b0, busy }
//   SPI_CTRL   OUT -> control register (see layout below)
//
// Control register (written via ctrl_we):
//   [2:0] CLKDIV  sck half-period = (CLKDIV + 1) core clocks
//                 (sck frequency = clk / (2 * (CLKDIV + 1)))
//   [3]   CPOL    clock idle polarity (0: idle low, 1: idle high)
//   [4]   CPHA    clock phase (0: sample on leading edge, 1: on trailing)
//   [5]   CS_N    chip-select output level (drive 0 to select a slave)
//
// A transfer is 8 sck periods (16 clock edges). `busy` is high for its whole
// duration; software polls SPI_STAT and reads SPI_DATA when it clears.
// ============================================================================

module open8_spi (
    input  wire        clk,
    input  wire        rst_n,

    // Register write interface (one-cycle strobes from open8_top I/O decode).
    input  wire        ctrl_we,    // write SPI_CTRL
    input  wire        data_we,    // write SPI_DATA (also starts a transfer)
    input  wire [7:0]  wdata,      // byte from the OUT instruction

    // Read-back to the I/O read mux.
    output wire [7:0]  rx_data,    // last received byte
    output wire        busy,       // high while a transfer is in progress

    // SPI bus pins.
    output reg         sck,
    output reg         mosi,
    input  wire        miso,
    output wire        cs_n
);
    // ---- Control register --------------------------------------------------
    reg [2:0] clkdiv;
    reg       cpol, cpha, cs_bit;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            clkdiv <= 3'd0;
            cpol   <= 1'b0;
            cpha   <= 1'b0;
            cs_bit <= 1'b1;        // deselected after reset
        end else if (ctrl_we) begin
            clkdiv <= wdata[2:0];
            cpol   <= wdata[3];
            cpha   <= wdata[4];
            cs_bit <= wdata[5];
        end
    end

    // Chip-select follows the control bit directly (software framing).
    assign cs_n = cs_bit;

    // ---- Shift engine ------------------------------------------------------
    // The transfer is driven entirely by sck edges. `tcnt` counts edges done
    // (0..15); a full byte is 16 edges. Odd-numbered edges (tcnt even) are the
    // leading edges, even-numbered edges (tcnt odd) the trailing edges.
    //
    //   CPHA=0: sample on leading, change MOSI on trailing, first bit presented
    //           when the transfer starts.
    //   CPHA=1: change MOSI on leading, sample on trailing.
    reg        running;
    reg [4:0]  tcnt;              // sck edges completed (0..15)
    reg [2:0]  dcnt;              // clock divider counter
    reg [7:0]  tx_shift, rx_shift;

    assign busy    = running;
    assign rx_data = rx_shift;

    wire this_is_leading = (tcnt[0] == 1'b0);  // edge number (tcnt+1) is odd
    wire do_sample = this_is_leading ? ~cpha : cpha;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            running  <= 1'b0;
            tcnt     <= 5'd0;
            dcnt     <= 3'd0;
            sck      <= 1'b0;
            mosi     <= 1'b0;
            tx_shift <= 8'h00;
            rx_shift <= 8'h00;
        end else if (!running) begin
            // Idle: hold sck at its polarity, wait for a DATA write to start.
            sck  <= cpol;
            dcnt <= 3'd0;
            tcnt <= 5'd0;
            if (data_we) begin
                running  <= 1'b1;
                rx_shift <= 8'h00;
                if (!cpha) begin
                    // CPHA=0: present the first bit before the leading edge.
                    mosi     <= wdata[7];
                    tx_shift <= {wdata[6:0], 1'b0};
                end else begin
                    // CPHA=1: first bit goes out on the first leading edge.
                    tx_shift <= wdata;
                end
            end
        end else begin
            // Running: count down the divider, then emit one sck edge.
            if (dcnt != clkdiv) begin
                dcnt <= dcnt + 3'd1;
            end else begin
                dcnt <= 3'd0;
                sck  <= ~sck;

                if (do_sample) begin
                    rx_shift <= {rx_shift[6:0], miso};
                end else begin
                    mosi     <= tx_shift[7];
                    tx_shift <= {tx_shift[6:0], 1'b0};
                end

                if (tcnt == 5'd15) begin
                    running <= 1'b0;   // 16th edge done -> transfer complete
                    tcnt    <= 5'd0;
                end else begin
                    tcnt <= tcnt + 5'd1;
                end
            end
        end
    end
endmodule
