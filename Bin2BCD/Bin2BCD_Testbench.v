`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:56:44 12/25/2023
// Design Name:   Bin2BCD
// Module Name:   D:/Verilog/MyVerilog/Bin2BCD/Bin2BCD_Testbench.v
// Project Name:  Bin2BCD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Bin2BCD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Bin2BCD_Testbench;

	// Inputs
	reg [7:0] BIN;

	// Outputs
	wire [9:0] BCD;

	// Instantiate the Unit Under Test (UUT)
	Bin2BCD uut (
		.BIN(BIN), 
		.BCD(BCD)
	);

	initial begin
		// Initialize Inputs
		BIN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always
		begin
			BIN = BIN + 8'b1;
			#100;
		end
endmodule

