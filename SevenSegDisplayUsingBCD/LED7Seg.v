`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:34:43 11/25/2023 
// Design Name: 
// Module Name:    LED7Seg 
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
module LED7Seg(
	input a, b, c, d,
	output la, lb, lc, ld, le, lf, lg
    );
	assign la = c | a | (~b)&(~c)&(~d)|(b&d);
	assign lb = a | (~a)&(~b)|(c~^d);
	assign lc = (~c)|d|b;
	assign ld = c&(~d)|a|(~c&(b~^d));
	assign le = c&(~d)|((~b)&(~c)&(~d));
	assign lf = a|((~c)&(~d))|b&(~c)|b&(~d);
	assign lg = a|c&(~d)|(b^c);

endmodule
