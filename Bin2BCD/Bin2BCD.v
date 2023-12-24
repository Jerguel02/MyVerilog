`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:33:38 12/24/2023 
// Design Name: 
// Module Name:    Bin2BCD 
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
module Bin2BCD (BIN, BCD
    );
	parameter N = 8;
	input [N-1:0] BIN;
	output reg [N+(N-4)/3:0] BCD;
	
  integer i,j;

  always @(BIN) begin
    for(i = 0; i <= N+(N-4)/3; i = i+1) BCD[i] = 0;     
    BCD[N-1:0] = BIN;                                   
    for(i = 0; i <= N-4; i = i+1)                       
      for(j = 0; j <= i/3; j = j+1)                     
        if (BCD[N-i+4*j -: 4] > 4)                      
          BCD[N-i+4*j -: 4] = BCD[N-i+4*j -: 4] + 4'd3; 
  end
	

endmodule
