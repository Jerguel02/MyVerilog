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
	reg pre, clr;
	// Outputs
	wire Q;
	wire Qn;

	// Instantiate the Unit Under Test (UUT)
	D_FF uut (
		.clk(clk), 
		.D(D), 
		.pre(pre),
		.clr(clr),
		.Q(Q), 
		.Qn(Qn)
	);

initial begin
		// Initialize Inputs
		D = 0;
		clk = 0;
		clr = 0;
		pre = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		clr = 1;
		pre = 0;
		#100;
		clr = 0;
		pre = 1;
		#100;
		pre = 1; clr = 1;
	end

    always
		begin
			clk = ~clk;
			#20;
		end
	always
		begin
			D = ~D;
			#60;
		end
endmodule

