`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:49 11/24/2023 
// Design Name: 
// Module Name:    FullAdder4Bits 
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
module FullAdder4Bits(
	input [3:0] A,
	input [3:0] B,
	input [3:0] Cin,
	output [4:0] SUM,
	output [3:0]Co
    );
	FullAdder1Bit FA1B_0 (A[0], B[0], Cin[0], SUM[0], Co[0]);
	FullAdder1Bit FA1B_1 (A[1], B[1], Co[0], SUM[1], Co[1]);
	FullAdder1Bit FA1B_2 (A[2], B[2], Co[1], SUM[2], Co[2]);
	FullAdder1Bit FA1B_3 (A[3], B[3], Co[2], SUM[3], Co[3]);
	assign SUM[4] = SUM[3] + Co[3];

endmodule
