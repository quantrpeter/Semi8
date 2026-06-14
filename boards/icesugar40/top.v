`default_nettype none

// Board-specific top level for IceSugar 40 (iCE40UP5K-SG48).
//
// Modeled directly on the proven working reference design
// (icesugar40-example/src/basic/verilog/leds/leds.v):
//   - 12 MHz clock comes in on pin 35.
//   - The onboard RGB LED is driven as ORDINARY user IO on pins 40/41/39,
//     ACTIVE-LOW (drive 0 to light a channel). No SB_RGBA_DRV hard IP.
//   - No external reset pin. (The previous revision mapped rst_btn to pin 10,
//     which on iCESugar is the USB_DP line to the iCELink — that held the CPU
//     in reset forever, so the blink never ran.) Reset is now a short internal
//     power-on reset generated after configuration.
//
// Behavior with the blink example (example/blink/blink.s):
//   port_out = 0xFF -> all RGB channels driven low -> LED ON (white)
//   port_out = 0x00 -> all channels high           -> LED OFF
//   The LED blinks white at roughly 1 Hz.

module top (
    input  wire clk,    // 12 MHz oscillator (pin 35)

    // Onboard RGB LED, active-low plain IO (pins 40/41/39 — see pins.pcf)
    output wire LED_R,
    output wire LED_G,
    output wire LED_B,

    // Optional external LEDs on PMOD2 (active-low), see pins.pcf
    output wire led0,
    output wire led1,
    output wire led2,
    output wire led3,
    output wire led4,
    output wire led5,
    output wire led6,
    output wire led7,

    // SPI master header (iCESugar SPI pins — see pins.pcf)
    output wire spi_sck,
    output wire spi_mosi,
    input  wire spi_miso,
    output wire spi_cs_n
);

    // ------------------------------------------------------------
    // Internal power-on reset: hold rst_n low for 2^15 clocks after
    // configuration (~2.7 ms at 12 MHz), then release forever.
    // iCE40 registers initialize to 0 at configuration, so por_counter
    // reliably starts from 0.
    // ------------------------------------------------------------
    reg [15:0] por_counter = 16'd0;
    always @(posedge clk) begin
        if (!por_counter[15])
            por_counter <= por_counter + 16'd1;
    end
    wire rst_n = por_counter[15];

    // ------------------------------------------------------------
    // Open8 SoC: runs program.hex. The GPIO is banked (addr k -> pins
    // [8k +: 8]); this board only wires bank 0's low 8 bits to the LEDs.
    // Unused GPIO bits are trimmed away by synthesis.
    // ------------------------------------------------------------
    localparam IO_PORTS = 32;                 // up to 256 GPIO pins; SPI at addr 32..34
    wire [IO_PORTS*8-1:0] port_out;

    // DMEM_ADDR_W=6 -> 64 bytes of data RAM. The data memory is asynchronous-
    // read, so yosys must build it from flip-flops/LUTs (iCE40 BRAM is
    // synchronous-read only); the default 4 KB would not fit in a UP5K.
    open8_top #(
        .DMEM_ADDR_W(6),
        .IO_PORTS   (IO_PORTS)
    ) u_open8 (
        .clk        (clk),
        .rst_n      (rst_n),

        .port_in    ({(IO_PORTS*8){1'b0}}),
        .port_out   (port_out),
        .port_out_we(),

        .spi_sck    (spi_sck),
        .spi_mosi   (spi_mosi),
        .spi_miso   (spi_miso),
        .spi_cs_n   (spi_cs_n),

        .halted     (),
        .dbg_addr   (5'd0),
        .dbg_data   (),
        .dbg_sreg   (),
        .dbg_pc     ()
    );

    // ------------------------------------------------------------
    // LED mapping (all active-low, like the working reference design):
    // writing 0xFF to port 0 turns everything ON, 0x00 turns it OFF.
    // ------------------------------------------------------------
    assign LED_R = ~port_out[0];
    assign LED_G = ~port_out[1];
    assign LED_B = ~port_out[2];

    assign led0 = ~port_out[0];
    assign led1 = ~port_out[1];
    assign led2 = ~port_out[2];
    assign led3 = ~port_out[3];
    assign led4 = ~port_out[4];
    assign led5 = ~port_out[5];
    assign led6 = ~port_out[6];
    assign led7 = ~port_out[7];

endmodule
