`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:08:20 12/29/2023 
// Design Name: 
// Module Name:    OrUsingMux 
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
module OrUsingMux(input A, B, output Out
    );
	parameter M1 = 1;
	defparam Mux1.M = M1;
	MuxM Mux1(A, B, B, Out);

endmodule
