`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:41:18 12/26/2023 
// Design Name: 
// Module Name:    BCD2Bin 
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
//Using reverse double dabble algorithm
//
//
module BCD2Bin #(parameter W = 8)( BCD, BIN );
	
	input [W-1:0] BCD;
	output reg [W-1:0] BIN;
	
	integer i, j;
	always @ (BCD)
		begin
			for (i=0; i<=W-1; i=i+1) begin BIN[i] = 0; end
			BIN[W-1:0] = BCD;
			for (i=W-1; i>=3; i = i-1)
				for (j=0; j<(W-i-1)/3; j=j+1)
					if (BIN[W-i-4*j -:4]>=8) begin BIN[W-i-4*j -:4] = BIN[W-i-4*j -: 4] - 4'b0011; end
				
		end
endmodule

