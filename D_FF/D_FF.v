`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:41:08 12/18/2023 
// Design Name: 
// Module Name:    D_FF 
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
module D_FF(
	input clk, D, pre, clr,
	output reg Q,
	output Qn
    );
initial
	begin
		Q <= 0;
	end
always @(posedge clk)
	begin
		if (~clr && pre)
			Q <= 1'b0;
		else if (~pre && clr)
			Q <= 1'b1;
		else if (~pre && ~clr)
			Q <= 1'bX;
		else
			begin
				Q <= D;
			end
	end
assign Qn = ~Q;
endmodule
