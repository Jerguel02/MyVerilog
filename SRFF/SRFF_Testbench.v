`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:30:54 12/30/2023
// Design Name:   SRFF
// Module Name:   D:/Verilog/MyVerilog/SRFF/SRFF_Testbench.v
// Project Name:  SRFF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SRFF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SRFF_Testbench;

	// Inputs
	reg S;
	reg R;
	reg clk;
	reg reset;

	// Outputs
	wire q;
	wire qb;

	// Instantiate the Unit Under Test (UUT)
	SRFF uut (
		.S(S), 
		.R(R), 
		.clk(clk), 
		.reset(reset), 
		.q(q), 
		.qb(qb)
	);

	initial begin
		// Initialize Inputs
		S = 0;
		R = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    always
		begin
			S = ~S;
			#10;
		end
	always
		begin
			R = ~R;
			#20;
		end
	always
		begin
			clk = ~clk;
			#5;
		end
	always
		begin
			reset = ~reset;
			#40;
		end
endmodule

