`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:10:46 12/29/2023
// Design Name:   OrUsingMux
// Module Name:   D:/Verilog/MyVerilog/OrUsingMux/OrMux_Testbench.v
// Project Name:  OrUsingMux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: OrUsingMux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module OrMux_Testbench;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire Out;

	// Instantiate the Unit Under Test (UUT)
	OrUsingMux uut (
		.A(A), 
		.B(B), 
		.Out(Out)
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

