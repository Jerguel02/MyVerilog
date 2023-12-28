`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:24:37 12/29/2023 
// Design Name: 
// Module Name:    SevenSeg_Cat 
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
module SevenSeg_Cat #(parameter N1 = 8) (input [N1-1:0] Input, output [6:0] Display_LED0, [6:0] Display_LED1
    );
	defparam Bin2BCD1.N = N1;
	wire [N1+(N1-4)/3:0] BCD_Output;
	Bin2BCD Bin2BCD1(Input, BCD_Output);
	LED7Seg LED1(BCD_Output[7], BCD_Output[6], BCD_Output[5] , BCD_Output[4], Display_LED1[6], Display_LED1[5], Display_LED1[4],
	Display_LED1[3], Display_LED1[2], Display_LED1[1], Display_LED1[0]);
	LED7Seg LED0(BCD_Output[3], BCD_Output[2], BCD_Output[1] , BCD_Output[0], Display_LED0[6], Display_LED0[5], Display_LED0[4],
	Display_LED0[3], Display_LED0[2], Display_LED0[1], Display_LED0[0]);
endmodule
