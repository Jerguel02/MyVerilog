`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:39:11 12/30/2023 
// Design Name: 
// Module Name:    JKFF 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module JKFF(input j, k, reset, pre, clk, 
				output reg q, qb
    );
	initial begin q = 1'b0; qb = 1'b1; end
	always @ (posedge clk)
	begin
		if (~reset && pre) begin
			q = 1'b0; qb = 1'b1;
		end
		else if (reset && ~pre ) begin q = 1'b1; qb = 1'b0; end
		else if (~reset && ~pre) begin q = 1'bZ; qb = 1'bZ; end
		else
		begin
			case ({j, k})
			{1'b0, 1'b0}: begin q = q; qb = qb; end
			{1'b0, 1'b1}: begin q = 1'b0; qb = 1'b0; end
			{1'b1, 1'b0}: begin q = 1'b1; qb = 1'b1; end
			{1'b1, 1'b1}: begin q = ~q; qb = ~qb; end
			endcase
		end
	end

endmodule
