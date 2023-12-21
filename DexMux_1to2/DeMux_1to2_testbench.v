`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:48:02 11/25/2023
// Design Name:   DeMux_1to2
// Module Name:   D:/Verilog/DexMux_1to2/DeMux_1to2_testbench.v
// Project Name:  DexMux_1to2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DeMux_1to2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DeMux_1to2_testbench;

	// Inputs
	reg sel;
	reg in;
	reg en;

	// Outputs
	wire y1;
	wire y0;

	// Instantiate the Unit Under Test (UUT)
	DeMux_1to2 uut (
		.sel(sel), 
		.in(in), 
		.en(en), 
		.y1(y1), 
		.y0(y0)
	);

	initial begin
		// Initialize Inputs
		sel = 0;
		in = 0;
		en = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
     always
		begin
			in = ~in;
			#100;
		end
	always
		begin
			sel = ~sel;
			#200;
		end
	always
		begin
			en = ~en;
			#400;
		end
endmodule

