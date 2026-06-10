`default_nettype none

// Board-specific top level for IceSugar 40 (iCE40UP5K-SG48).
// - Uses internal HFOSC (~48 MHz)
// - Instantiates the portable Open8 SoC (open8_top)
// - Maps the abstract 8-bit I/O port to physical LEDs
// - Provides synchronized reset from a button
//
// The core runs the program in program.hex automatically after reset.
// The default demo (example/program/program.s) writes the result (0x37) to I/O port 0.
// Use EXAMPLE=blink for a continuous toggle of bit 0 (visible on led0).

module top (
    input  wire rst_btn,   // button, press = low (active-low input)

    output wire led0,
    output wire led1,
    output wire led2,
    output wire led3,
    output wire led4,
    output wire led5,
    output wire led6,
    output wire led7
);

    // ------------------------------------------------------------
    // Clock: internal high-frequency oscillator
    // CLKHF_DIV "0b00" = divide by 1 → ~48 MHz on UP5K
    // ------------------------------------------------------------
    wire clk;
    SB_HFOSC #(
        .CLKHF_DIV("0b00")
    ) hfosc_inst (
        .CLKHFEN(1'b1),
        .CLKHFPU(1'b1),
        .CLKHF  (clk)
    );

    // ------------------------------------------------------------
    // Reset synchronizer (async assert, sync deassert)
    // rst_btn low when pressed → treat as external reset request
    // ------------------------------------------------------------
    wire rst_n;
    reset_synchronizer u_rst_sync (
        .clk    (clk),
        .rst_in (~rst_btn),   // convert active-low button to active-high for sync
        .rst_n  (rst_n)
    );

    // ------------------------------------------------------------
    // I/O port wiring
    // port_in  : tie to 0 for now (extend with buttons/switches if desired)
    // port_out : 8-bit value written by the core via OUT 0, Rn
    // ------------------------------------------------------------
    wire [7:0] port_in  = 8'h00;
    wire [7:0] port_out;
    wire       port_out_we;   // 1-cycle write strobe (optional to use for LED enables etc.)

    // The board-agnostic Open8 SoC
    open8_top u_open8 (
        .clk        (clk),
        .rst_n      (rst_n),

        .port_in    (port_in),
        .port_out   (port_out),
        .port_out_we(port_out_we),

        // Debug / status left unconnected for FPGA (only used in sim)
        .halted     (),
        .dbg_addr   (5'd0),
        .dbg_data   (),
        .dbg_sreg   (),
        .dbg_pc     ()
    );

    // ------------------------------------------------------------
    // LED mapping
    // Change to ~port_out[x] if your LEDs are active-low.
    // ------------------------------------------------------------
    assign led0 = port_out[0];
    assign led1 = port_out[1];
    assign led2 = port_out[2];
    assign led3 = port_out[3];
    assign led4 = port_out[4];
    assign led5 = port_out[5];
    assign led6 = port_out[6];
    assign led7 = port_out[7];

endmodule
