`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:49:14 12/24/2023
// Design Name:   Bin2Gray
// Module Name:   D:/Verilog/MyVerilog/BinToGray/Bin2Gray_Testbench.v
// Project Name:  BinToGray
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Bin2Gray
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Bin2Gray_Testbench;

	// Inputs
	reg [3:0] BIN;

	// Outputs
	wire [3:0] GRAY;

	// Instantiate the Unit Under Test (UUT)
	Bin2Gray uut (
		.BIN(BIN), 
		.GRAY(GRAY)
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
				if (BIN == 4'b1111)
					begin
						BIN = 4'b0000;
						#100;
					end
				else
					begin
						BIN = BIN + 4'b0001; #100;
					end
			end
endmodule

