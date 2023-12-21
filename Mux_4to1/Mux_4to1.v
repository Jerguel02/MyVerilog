`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:59 12/21/2023 
// Design Name: 
// Module Name:    Mux_4to1 
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
module Mux_4to1(A, B, C, D, S, Y
    );
parameter M1 = 7;
input [M1:0] A, B, C, D;
input [1:0] S;
output [M1:0] Y;
wire [M1:0] Y1, Y2;
defparam mux1.M = M1, mux2.M = M1, mux3.M = M1;
MuxM mux1(A, B, S[0], Y1);
MuxM mux2(C, D, S[0], Y2);
MuxM mux3(Y1, Y2, S[1], Y);
endmodule
