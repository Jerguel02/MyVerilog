`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:45:45 12/29/2023
// Design Name:   Adder_Subtractor
// Module Name:   D:/Verilog/MyVerilog/Controlled_Adder-Subtractor/Adder_Subtractor_Testbench.v
// Project Name:  Controlled_Adder-Subtractor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder_Subtractor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Adder_Subtractor_Testbench;

	// Inputs
	reg a0;
	reg a1;
	reg a2;
	reg a3;
	reg b0;
	reg b1;
	reg b2;
	reg b3;
	reg ctrl;

	// Outputs
	wire s0;
	wire s1;
	wire s2;
	wire s3;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	Adder_Subtractor uut (
		.a0(a0), 
		.a1(a1), 
		.a2(a2), 
		.a3(a3), 
		.b0(b0), 
		.b1(b1), 
		.b2(b2), 
		.b3(b3), 
		.ctrl(ctrl), 
		.s0(s0), 
		.s1(s1), 
		.s2(s2), 
		.s3(s3), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a0 = 0;
		a1 = 0;
		a2 = 0;
		a3 = 0;
		b0 = 0;
		b1 = 0;
		b2 = 0;
		b3 = 0;
		ctrl = 0;

		// Wait 100 ns for global reset to finish
		#10;
	
	end
	always
		begin
				// Add stimulus here
		a0 = ~a0;
		#10;
		end
	always
		begin
		a1 = ~a1;
		#20;
		end
	always
		begin
		a3 = ~a3;
		#25;
		end
	always
		begin
		a3 = ~a3;
		#30;
		end
	always
		begin
		b0 = ~b0;
		#35;
		end
	always
		begin
		b1 = ~b1;
		#40;
		end
	always
		begin
		b2 = ~b2;
		#45;
		end
	always
		begin
		b3 = ~b3;
		#50;
		end
	always
		begin
		ctrl = ~ctrl;
		#5;
		end
endmodule

