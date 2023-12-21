`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:16:48 11/25/2023
// Design Name:   DeMux_1to8
// Module Name:   D:/Verilog/DeMux_1to8/DeMux_1to8_testbench.v
// Project Name:  DeMux_1to8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DeMux_1to8
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DeMux_1to8_testbench;

	// Inputs
	reg in;
	reg [2:0] SEL;
	reg en;
	// Outputs
	wire y7;
	wire y6;
	wire y5;
	wire y4;
	wire y3;
	wire y2;
	wire y1;
	wire y0;


	// Instantiate the Unit Under Test (UUT)
	DeMux_1to8 uut (
		.in(in), 
		.SEL(SEL), 
		.y7(y7), 
		.y6(y6), 
		.y5(y5), 
		.y4(y4), 
		.y3(y3), 
		.y2(y2), 
		.y1(y1), 
		.y0(y0), 
		.en(en)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		SEL = 0;
		en = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		en = 1;
		in = 1;
	end
      	always 
	begin
		SEL[0] = ~SEL[0];
		#100;
	end
	always
	begin
		SEL[1] = ~SEL[1];
		#200;
	end
	always
	begin
		SEL[2] = ~SEL[2];
		#400;
	end
endmodule

