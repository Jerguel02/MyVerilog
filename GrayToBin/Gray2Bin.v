`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:38:18 12/24/2023 
// Design Name: 
// Module Name:    Gray2Bin 
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
// BIN[i] = GRAY[n] if i = n
// BIN[i] = BIN[i+1] ^ GRAY[i] if i = 0, 1, 2, ..., (n-1)
//
module Gray2Bin(GRAY, BIN
    );
	parameter NUM_PIN = 3;
	input [NUM_PIN:0] GRAY;
	output [NUM_PIN:0] BIN;
	assign BIN = CONVERSION(GRAY);
	
	function [NUM_PIN:0] CONVERSION;
		input [NUM_PIN:0] GRAY;
		integer i;
		for (i = NUM_PIN; i>=0; i = i-1) begin
			if (i == NUM_PIN) begin CONVERSION[i] = GRAY[i]; end
			else begin CONVERSION[i] = GRAY[i] ^ CONVERSION[i+1]; end
		end
	endfunction

endmodule
