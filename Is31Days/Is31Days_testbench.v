`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:36:37 11/24/2023
// Design Name:   Is31Days
// Module Name:   D:/Verilog/Is31Days/Is31Days_testbench.v
// Project Name:  Is31Days
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Is31Days
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Is31Days_testbench;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;

	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	Is31Days uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 0;
		B = 0;
		C = 0;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;  
				A = 0;
		B = 0;
		C = 1;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 0;
		B = 0;
		C = 1;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 0;
		B = 1;
		C = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 0;
		B = 1;
		C = 0;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 0;
		B = 1;
		C = 1;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 0;
		B = 1;
		C = 1;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 0;
		C = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 0;
		C = 0;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 0;
		C = 1;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 0;
		C = 1;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 1;
		C = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 1;
		C = 0;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 1;
		C = 1;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
						A = 1;
		B = 1;
		C = 1;
		D = 1;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      
endmodule

