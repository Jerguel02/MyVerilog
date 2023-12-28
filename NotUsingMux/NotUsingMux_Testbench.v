`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:05:18 12/29/2023
// Design Name:   NotUsingMux
// Module Name:   D:/Verilog/MyVerilog/NotUsingMux/NotUsingMux_Testbench.v
// Project Name:  NotUsingMux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NotUsingMux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module NotUsingMux_Testbench;

	// Inputs
	reg In;

	// Outputs
	wire Out;

	// Instantiate the Unit Under Test (UUT)
	NotUsingMux uut (
		.In(In), 
		.Out(Out)
	);

	initial begin
		// Initialize Inputs
		In = 0;

		// Wait 100 ns for global reset to finish
		#100;
       In = 1;
		 #100;
		// Add stimulus here

	end
      
endmodule

