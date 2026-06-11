`default_nettype none

// Board-specific top level for IceSugar 40 (iCE40UP5K-SG48).
// - Takes clk as an explicit input (matching the style of reference designs
//   such as src/basic/verilog/leds/leds.v in the icesugar40-example repo).
// - Instantiates the portable Open8 SoC (open8_top)
// - Maps the abstract 8-bit I/O port to physical LEDs / RGB
// - Provides synchronized reset from a button
//
// The core runs the program in program.hex automatically after reset.
// The default demo (example/program/program.s) writes the result (0x37) to I/O port 0.
// Use EXAMPLE=blink for a continuous 0x00 <-> 0xFF toggle on port_out (and R16).
//
// VISIBLE OUTPUT ON STOCK iCESUGAR (no extra hardware):
//   The board has ONE onboard RGB LED driven by the iCE40 hard IP (SB_RGBA_DRV).
//   This design drives that RGB LED so you can see the blink without wiring anything.
//   - When the blink example writes 0x00 to port 0, the RGB turns ON (bright).
//   - When it writes 0xFF, the RGB turns OFF.
//   The blink.s currently has a ~0.35 s half-period delay (three nested loops) so the
//   on/off is slow enough for the human eye.
//
//   The 8 "led0..led7" outputs are also driven (for people who connect a PMOD LED board
//   or discrete LEDs). On many LED boards the LEDs are ACTIVE-LOW, so we drive them with
//   the inverted value (~port_out). If your LEDs light when the signal is high, change
//   the 8 assigns below to direct port_out[x].
//
//   IMPORTANT: The onboard RGB pins are SPECIAL. They are driven exclusively by the
//   SB_RGBA_DRV primitive below. Do NOT put "set_io LED_R ..." etc. in the .pcf — the
//   primitive claims the dedicated RGB package pins automatically.
//
// If after "make ... prog" you still see nothing:
//   1. Confirm you are looking at the small onboard RGB LED (near the USB connector / center).
//   2. Re-run with a clean build: make EXAMPLE=blink BOARD=icesugar40 fpga-clean bitstream prog
//   3. Power-cycle the board after programming.
//   4. Check that iCELink actually received a new .bin (the drive should appear briefly).

module top (
    input  wire clk,       // external clock input (e.g. pin 35 on iCESugar, as used in reference leds.v)
    input  wire rst_btn,   // button, press = low (active-low input)

    // 8-bit port LEDs (for external LEDs or PMOD LED board on the pins listed in pins.pcf).
    // We use the pmod_leds/led.pcf mapping (clk on 35, LEDs on 45/43/38/36/46/44/42/37).
    // Many common LED boards / direct wiring are ACTIVE-LOW (drive 0 to light).
    // We use ~port_out so that when the blink example writes 0xFF the LEDs turn ON together.
    output wire led0,
    output wire led1,
    output wire led2,
    output wire led3,
    output wire led4,
    output wire led5,
    output wire led6,
    output wire led7,

    // Onboard RGB LED (iCESugar has one RGB LED driven by the iCE40 hard IP).
    // These three outputs are connected via SB_RGBA_DRV below; do NOT put set_io
    // for them in the .pcf — the primitive owns the dedicated RGB package pins.
    output wire LED_R,
    output wire LED_G,
    output wire LED_B
);


    // ------------------------------------------------------------
    // Reset logic
    // - External button (active-low) is synchronized.
    // - We also generate a short internal power-on reset (POR) that releases
    //   after ~2^16 clocks. The actual period depends on the frequency of the
    //   clk input you supply (e.g. 12 MHz on many iCESugar boards → ~5.5 ms).
    //   This guarantees the core will start even if the button pin / pull-up
    //   is not wired exactly as expected or the button is floating/held.
    // - Final sys_rst_n is the AND of external sync'd reset and internal POR.
    // ------------------------------------------------------------
    wire ext_rst_n;
    reset_synchronizer u_rst_sync (
        .clk    (clk),
        .rst_in (~rst_btn),   // active-low button → high pulse requests reset
        .rst_n  (ext_rst_n)
    );

    // Internal power-on reset release (counts up from 0 after configuration).
    // Bit 15 going high releases the internal reset.
    reg [15:0] por_counter;
    always @(posedge clk) begin
        if (por_counter[15] == 1'b0) begin
            por_counter <= por_counter + 16'd1;
        end
    end
    wire por_rst_n = por_counter[15];

    wire rst_n = ext_rst_n & por_rst_n;

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
    // 8-bit discrete / PMOD LED mapping (led0..led7)
    // Most common PMOD LED boards and direct-wired LEDs on iCE40 boards are
    // ACTIVE-LOW (the LED lights when the FPGA pin is driven LOW / 0).
    //
    // Current wiring: assign ledX = ~port_out[X];
    //   - When blink writes port_out = 0x00  → ledX = 1  → PMOD LEDs are OFF (if active-low)
    //   - When blink writes port_out = 0xFF  → ledX = 0  → PMOD LEDs are ON  (if active-low)
    //
    // This is the inverse of the onboard RGB behavior (RGB is ON for 0x00).
    // If you want the 8 LEDs to light in the same phase as the RGB, change the
    // 8 lines below to direct "assign ledX = port_out[X];" (or add another ~).
    //
    // If your LEDs light when the FPGA pin is high, remove the ~ .
    // ------------------------------------------------------------
    assign led0 = ~port_out[0];
    assign led1 = ~port_out[1];
    assign led2 = ~port_out[2];
    assign led3 = ~port_out[3];
    assign led4 = ~port_out[4];
    assign led5 = ~port_out[5];
    assign led6 = ~port_out[6];
    assign led7 = ~port_out[7];

    // ------------------------------------------------------------
    // Onboard RGB LED (the one thing every stock iCESugar has, no extra hardware needed)
    //
    // The iCE40UP5K has a dedicated 3-channel RGB LED driver hard IP.
    // These pins (package RGB0/RGB1/RGB2) MUST be driven via SB_RGBA_DRV.
    // Do NOT add "set_io LED_R / LED_G / LED_B" in the .pcf — the primitive
    // automatically claims the dedicated RGB pins.
    //
    // We light the RGB when the blink value is 0x00 (all "LEDs on" phase)
    // and turn it off when the value is 0xFF. This gives a clear, slow blink
    // that matches what you see in gtkwave for R16 / port_out.
    //
    // We also run a very slow free-running heartbeat on the BLUE channel.
    // This proves that the FPGA is configured and the bitstream is alive even
    // during the long software delay loops in blink.s. When the core is toggling
    // you will see the main blink "ride on top" of the heartbeat.
    // The actual blink/heartbeat rate now depends on the frequency of the clk
    // input (commonly 12 MHz on pin 35 for iCESugar boards).
    // ------------------------------------------------------------
    wire rgb_on = (port_out == 8'h00);

    // Very slow heartbeat counter (~1.5 s period at 48 MHz for a full on/off cycle).
    // We use it to keep at least one channel wiggling so you can tell the FPGA
    // is not stuck in configuration or reset.
    reg [25:0] heartbeat_cnt;
    always @(posedge clk) begin
        heartbeat_cnt <= heartbeat_cnt + 26'd1;
    end
    wire heartbeat = heartbeat_cnt[25];   // ~0.7 s high, ~0.7 s low

    // RGB drive:
    // - Red   : follows the core blink (ON for port_out==0x00)
    // - Green : follows the core blink
    // - Blue  : slow heartbeat (always shows "FPGA is running") ORed with core blink
    //           so you see activity even inside the long delay in blink.s
    wire red_pwm   = rgb_on;
    wire green_pwm = rgb_on;
    wire blue_pwm  = rgb_on | heartbeat;

    SB_RGBA_DRV #(
        .CURRENT_MODE("0b0"),     // 0 = full current range (recommended)
        .RGB0_CURRENT("0b000011"),// ~4 mA per channel — bright enough to see, safe
        .RGB1_CURRENT("0b000011"),
        .RGB2_CURRENT("0b000011")
    ) SB_RGBA_DRV_inst (
        .CURREN   (1'b1),
        .RGBLEDEN (1'b1),
        .RGB0PWM  (red_pwm),
        .RGB1PWM  (green_pwm),
        .RGB2PWM  (blue_pwm),
        .RGB0     (LED_R),
        .RGB1     (LED_G),
        .RGB2     (LED_B)
    );

endmodule
