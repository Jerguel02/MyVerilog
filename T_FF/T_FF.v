`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:25 12/18/2023 
// Design Name: 
// Module Name:    T_FF 
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
module T_FF(
	input T, clk, clr, pre,
	output reg Q,
	output Qn
    );
initial 
	begin
		Q = 0;
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
				if (T)
					Q <= ~Q;
				else 
					Q <= Q;
	end
assign Qn = ~Q;
endmodule
