`default_nettype none

// Simple asynchronous reset synchronizer (2 flip-flop).
// - rst_in : asynchronous, active-high reset input (e.g. from button)
// - rst_n  : active-low reset, asynchronously asserted, synchronously deasserted
module reset_synchronizer (
    input  wire clk,
    input  wire rst_in,
    output wire rst_n
);
    reg [1:0] sync_ff;

    always @(posedge clk or posedge rst_in) begin
        if (rst_in) begin
            sync_ff <= 2'b00;
        end else begin
            sync_ff <= {sync_ff[0], 1'b1};
        end
    end

    assign rst_n = sync_ff[1];
endmodule
