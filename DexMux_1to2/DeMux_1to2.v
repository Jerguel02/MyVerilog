`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:44:58 11/25/2023 
// Design Name: 
// Module Name:    DeMux_1to2 
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
module DeMux_1to2(
	input sel, in, en,
	output y1, y0
    );
assign y0 = ~sel&in&en;
assign y1 = sel&in&en;

endmodule
