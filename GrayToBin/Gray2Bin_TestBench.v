`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:54:18 12/24/2023
// Design Name:   Gray2Bin
// Module Name:   D:/Verilog/MyVerilog/GrayToBin/Gray2Bin_TestBench.v
// Project Name:  GrayToBin
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Gray2Bin
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Gray2Bin_TestBench;

	// Inputs
	reg [3:0] GRAY;

	// Outputs
	wire [3:0] BIN;

	// Instantiate the Unit Under Test (UUT)
	Gray2Bin uut (
		.GRAY(GRAY), 
		.BIN(BIN)
	);

	initial begin
		// Initialize Inputs
		GRAY = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always
			begin
				if (GRAY == 4'b1111)
					begin
						GRAY = 4'b0000;
						#100;
					end
				else
					begin
						GRAY = GRAY + 4'b0001; #100;
					end
			end
endmodule

