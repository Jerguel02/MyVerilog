`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:16:08 12/24/2023 
// Design Name: 
// Module Name:    Bin2Gray 
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
// GRAY[i] = BIN[n] if i = n
// GRAY[i] = BIN[i+1] ^ BIN[i] if i = 0, 1, 2, ..., (n-1)
//

module Bin2Gray(BIN, GRAY
    );
	parameter NUM_PIN = 3;
	input [NUM_PIN:0] BIN;
	output reg [NUM_PIN:0] GRAY;
	always @(BIN)
		begin
			GRAY <= CONVERSION(BIN);
		end
	function [NUM_PIN:0] CONVERSION;
		input [NUM_PIN:0] BIN;
		integer i;
		for (i = NUM_PIN; i>=0; i = i-1) begin
			if (i == NUM_PIN) begin CONVERSION[i] = BIN[i]; end
			else begin CONVERSION[i] = BIN[i+1] ^ BIN[i]; end
		end
	endfunction
	
endmodule
