`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:27 12/29/2023 
// Design Name: 
// Module Name:    Adder_Subtractor 
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
//////////////////////////////////////////////////////////////////////////////////
//Note: 
// - The addition operation is performed when the ctrl input is low
//	- The subtraction operation is performed when the ctrl input is high
//////////////////////////////////////////////////////////////////////////////////
module Adder_Subtractor(input a0, a1, a2, a3, b0, b1, b2, b3,
								input ctrl, 
								output s0, s1, s2, s3, c
    );
	wire [2:0]carry;
	FullAdder1Bit FullAdder0(a0, (b0^ctrl), ctrl, s0, carry[0]);
	FullAdder1Bit FullAdder1(a1, (b1^ctrl), carry[0] , s1, carry[1]);
	FullAdder1Bit FullAdder2(a2, (b2^ctrl), carry[1] , s2, carry[2]);
	FullAdder1Bit FullAdder3(a3, (b3^ctrl), carry[2] , s3, c);

endmodule
