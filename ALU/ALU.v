`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:02:53 12/21/2023 
// Design Name: 
// Module Name:    ALU 
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
module ALU(A, B, ALU_Sel, ALU_Out, ALU_Carry
    );
input [7:0] A, B;
input [4:0] ALU_Sel;
output [7:0] ALU_Out;
output ALU_Carry;


reg [8:0] ALU_Result;
assign ALU_Carry = ALU_Result[8];
assign ALU_Out = ALU_Result[7:0];
always @*
	begin
		case (ALU_Sel)
			5'b00000 : ALU_Result = A + B; //Addition
			5'b00001 : ALU_Result = A - B; //Subtraction
			5'b00010 : ALU_Result = A * B; //Multiplication
			5'b00011 : ALU_Result = A / B; //Division
			5'b00100 : ALU_Result = A << 1; //Logical shift left
			5'b00101 : ALU_Result = A >> 1; //Logical shift right
			5'b00110 : ALU_Result = {A[6:0], A[7]}; //Rotate left
			5'b00111 : ALU_Result = {A[0], A[7:1]}; // Rotate right
			5'b01000 : ALU_Result = A & B; //Logical AND
			5'b01001 : ALU_Result = A | B; //Logical OR
			5'b01010 : ALU_Result = ~A;	 //Logical NOT
			5'b01011 : ALU_Result = A ^ B; //Logical XOR A.'B+'A.B
			5'b01100 : begin ALU_Result = ~(A & B); ALU_Result[8] = 0; end//Logical NAND
			5'b01101 : begin ALU_Result = ~(A | B); ALU_Result[8] = 0; end//Logiical NOR
			5'b01110 : begin ALU_Result = ~(A ^ B); ALU_Result[8] = 0; end//Logical XNOR A.B+'A.'B
			5'b01111 : ALU_Result = (A>B) ? 8'b1:8'b0; //Greater comparision
			5'b10000 : ALU_Result = (A<B) ? 8'b1:8'b0; //Lower comparision
			5'b10001 : ALU_Result = (A==B) ? 8'b1:8'b0;//Equal conparision
			default : ALU_Result = 8'b11111111;
		endcase
	end
endmodule
