`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:55:47 12/21/2023 
// Design Name: 
// Module Name:    MuxM 
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
module MuxM(A, B, S, Y
    );
parameter M = 4;
input [M:0] A, B;
input S;
output [M:0] Y;
assign Y = (S) ? A: B;
endmodule
