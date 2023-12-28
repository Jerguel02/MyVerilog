`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:19:00 12/29/2023
// Design Name:   XORUsingMux
// Module Name:   D:/Verilog/MyVerilog/XorUsingMux/XORUsingMux_TestBench.v
// Project Name:  XorUsingMux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: XORUsingMux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module XORUsingMux_TestBench;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	XORUsingMux uut (
		.A(A), 
		.B(B), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        		A = 0;
		B = 1;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
				A = 1;
		B = 1;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      
endmodule

