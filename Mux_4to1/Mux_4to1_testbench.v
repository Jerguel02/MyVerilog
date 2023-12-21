`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:03:47 12/21/2023
// Design Name:   Mux_4to1
// Module Name:   D:/Verilog/MyVerilog/Mux_4to1/Mux_4to1_testbench.v
// Project Name:  Mux_4to1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_4to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_4to1_testbench;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg [7:0] C;
	reg [7:0] D;
	reg [1:0] S;

	// Outputs
	wire [7:0] Y;

	// Instantiate the Unit Under Test (UUT)
	Mux_4to1 uut (
		.A(A), 
		.B(B), 
		.C(C),
		.D(D),
		.S(S), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		D = 0;
		S = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A = 3;
		B = 2;
		C = 1;
		D = 0;
		D = 0;
		// Add stimulus here
	end
	always 
		begin
			S = 2'b00;
			#100;
			S = 2'b01;
			#100;
			S = 2'b10;
			#100;
			S = 2'b11;
			#100;
		end
endmodule

