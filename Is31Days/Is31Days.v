`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:27:48 11/24/2023 
// Design Name: 
// Module Name:    Is31Days 
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
module Is31Days(
	input A, B, C, D,
	output result
    );
assign result = (A^D) | (A&(B+((~C)&(~D))));

endmodule
