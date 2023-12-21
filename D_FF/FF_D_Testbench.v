`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:49:57 12/18/2023
// Design Name:   D_FF
// Module Name:   D:/Verilog/D_FF/FF_D_Testbench.v
// Project Name:  D_FF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: D_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FF_D_Testbench;

	// Inputs
	reg clk;
	reg D;

	// Outputs
	wire Q;
	wire Qn;

	// Instantiate the Unit Under Test (UUT)
	D_FF uut (
		.clk(clk), 
		.D(D), 
		.Q(Q), 
		.Qn(Qn)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always
		begin
			clk = ~clk;
			#10;
		end
	always
		begin
			D = ~D;
			#25;
		end
endmodule

