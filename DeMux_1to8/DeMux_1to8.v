`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:35:22 11/25/2023 
// Design Name: 
// Module Name:    DeMux_1to8 
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
module DeMux_1to8(
	input in,
	input [2:0] SEL, en,
	output y7, y6, y5, y4, y3, y2, y1, y0
    );
assign y0 = en&in&(~SEL[2])&(~SEL[1])&(~SEL[0]);
assign y1 = en&in&(~SEL[2])&(~SEL[1])&SEL[0];
assign y2 = en&in&(~SEL[2])&(SEL[1])&(~SEL[0]);
assign y3 = en&in&(~SEL[2])&(SEL[1])&(SEL[0]);
assign y4 = en&in&(SEL[2])&(~SEL[1])&(~SEL[0]);
assign y5 = en&in&(SEL[2])&(~SEL[1])&(SEL[0]);
assign y6 = en&in&(SEL[2])&(SEL[1])&(~SEL[0]);
assign y7 = en&in&(SEL[2])&(SEL[1])&(SEL[0]);
endmodule
