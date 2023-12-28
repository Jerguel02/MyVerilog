`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:39:16 12/28/2023 
// Design Name: 
// Module Name:    Evenparity 
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
module Evenparity(bits, result
    );
	input [3:0] bits;
	output reg result;
	always @ (bits)
	begin
		result <= ((bits[0]^bits[1])^bits[2])^bits[3];
	end
endmodule
