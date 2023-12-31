`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:12:48 12/30/2023 
// Design Name: 
// Module Name:    SRFF 
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
module SRFF(input S, R, clk, reset, output reg q, qb
    );
	initial begin q = 1'b0; qb = 1'b1; end
	always @(posedge clk)
	begin
		if (reset) begin q <= 1'b0; qb <= 1'b1; end
		else
		begin
			if (S!=R) 
			begin
				q<=S; qb<=R;
			end
			else if (S==1 && R==1)
			begin
				q <=1'bZ; qb <= 1'bZ;
			end
		end
	end

endmodule
