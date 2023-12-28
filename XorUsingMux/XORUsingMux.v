`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:16:47 12/29/2023 
// Design Name: 
// Module Name:    XORUsingMux 
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
module XORUsingMux(input A, B, output out
    );
	parameter M1= 0;
	defparam Mux1.M = M1;
	MuxM Mux1(B, ~B, A, out);

endmodule
