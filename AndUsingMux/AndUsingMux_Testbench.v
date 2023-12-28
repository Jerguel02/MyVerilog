`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:15:34 12/29/2023
// Design Name:   AndUsingMux
// Module Name:   D:/Verilog/MyVerilog/AndUsingMux/AndUsingMux_Testbench.v
// Project Name:  AndUsingMux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AndUsingMux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module AndUsingMux_Testbench;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	AndUsingMux uut (
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

