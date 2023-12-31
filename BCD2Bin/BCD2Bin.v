`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:41:18 12/26/2023 
// Design Name: 
// Module Name:    BCD2Bin 
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
//
//
//Using 2 full-parallel-adders to convert from BCD to Binary
//
//
module BCD2Bin (input [7:0]BCD, output [6:0]BIN);

	wire [7:0] S;
	wire [1:0]Cout;
	Adder_Subtractor A_S1(BCD[1], BCD[2], BCD[3], BCD[5], BCD[4], BCD[5], BCD[4], 1'b0, 1'b0, S[0], S[1], S[2], S[3], Cout[0]);
	Adder_Subtractor A_S2(S[2], S[3], Cout[0], 1'b0, BCD[6], BCD[7], BCD[6], BCD[7], 1'b0, BIN[3], BIN[4], BIN[5], BIN[6], Cout[1]);
	assign BIN[1] = S[0];
	assign BIN[2] = S[1];
	assign BIN[0] = BCD[0];
endmodule

