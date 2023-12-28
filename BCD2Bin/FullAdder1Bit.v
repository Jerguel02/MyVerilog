`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  
// Engineer: 
// 
// Create Date:    19:23:24 11/24/2023 
// Design Name: 
// Module Name:    FullAdder1Bit 
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
module FullAdder1Bit(
	input a, b, cin,
	output sum, co
    );
assign sum = cin^(a^b);
assign co = (a&b) | cin & (a^b);
endmodule
