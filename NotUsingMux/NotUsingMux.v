`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:36 12/28/2023 
// Design Name: 
// Module Name:    NotUsingMux 
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
module NotUsingMux(input In, output Out
    );
	parameter M1 = 0;
	defparam Mux1.M = M1;
	wire A = 1;
	wire B = 0;
	MuxM Mux1(A, B, In, Out);

endmodule
