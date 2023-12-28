`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:37 12/29/2023 
// Design Name: 
// Module Name:    AndUsingMux 
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
module AndUsingMux(input A, B, output out
    );
	parameter M1= 0;
	defparam Mux1.M = M1;
	MuxM Mux1(A, B, A, out);

endmodule
