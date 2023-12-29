`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:06:01 12/29/2023
// Design Name:   BCD2Bin
// Module Name:   D:/Verilog/MyVerilog/BCD2Bin/BCD2Bin_Testbench.v
// Project Name:  BCD2Bin
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD2Bin
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD2Bin_Testbench;

	// Inputs
	reg [7:0]BCD;
	//output
	wire [6:0]BIN;
	// Instantiate the Unit Under Test (UUT)
	BCD2Bin uut (
		.BCD(BCD),
		.BIN(BIN)
	);

	initial begin
		// Initialize Inputs
		BCD = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always
		begin
			BCD = BCD + 8'b1;
			#10;
		end
endmodule

