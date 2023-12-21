`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:15:18 12/19/2023
// Design Name:   T_FF
// Module Name:   D:/Verilog/T_FF/T_FF_Testbench.v
// Project Name:  T_FF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: T_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module T_FF_Testbench;

	// Inputs
	reg T;
	reg clk;
	reg clr;
	reg pre;
	// Outputs
	wire Q;
	wire Qn;
	// Instantiate the Unit Under Test (UUT)
	T_FF uut (
		.T(T), 
		.clk(clk),
		.clr(clr),
		.pre(pre),
		.Q(Q), 
		.Qn(Qn)
	);

	initial begin
		// Initialize Inputs
		T = 0;
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
			T = ~T;
			#60;
		end
endmodule

