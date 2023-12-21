`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:05:13 12/16/2023 
// Design Name: 
// Module Name:    Led7SegAnode 
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
module Led7SegAnode(
	input i3, i2, i1, i0,
	output la, lb, lc, ld, le, lf, lg
    );
assign la = (~i1)&(~i3)&(i0|i2)&((~i0)|(~i2));
assign lb = ~i3&(i1+i0)&(~i1+~i0)&i2;
assign lc = ~i3&(~i2)&i1&(~i0);
assign ld = ~i3&((~i1)|i0)&(i2|(~i1))&(i2|i0)&((~i2)|i1|(~i0));
assign le = i0|(i2&(~i1));
assign lf = ~i3&(i1|i0)&((~i2)|i0)&((~i2)|i1);
assign lg = ~i3&((~i2)|i1)&((~i1)|i0)&(i2|(~i1));
endmodule
