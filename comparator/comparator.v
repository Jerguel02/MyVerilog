`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:43:48 12/28/2023 
// Design Name: 
// Module Name:    comparator 
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
//
//
//eq = ~(a ^ b)
//lt = ~a.b
//gt = a.~b
//////////////////////////////////////////////////////////////////////////////////
module comparator(a, b, eq, lt, gt
    );
	input a, b;
	output reg eq, lt, gt;
	always @(a, b)
	begin
		lt <= ~a & b;
		gt <= a & ~b;
		eq <= ~(lt^gt);
	end

endmodule
