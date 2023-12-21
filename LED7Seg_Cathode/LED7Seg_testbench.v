`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:47:58 11/25/2023
// Design Name:   LED7Seg
// Module Name:   D:/Verilog/LED7Seg_Cathode/LED7Seg_testbench.v
// Project Name:  LED7Seg_Cathode
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LED7Seg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LED7Seg_testbench;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;

	// Outputs
	wire la;
	wire lb;
	wire lc;
	wire ld;
	wire le;
	wire lf;
	wire lg;

	// Instantiate the Unit Under Test (UUT)
	LED7Seg uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.la(la), 
		.lb(lb), 
		.lc(lc), 
		.ld(ld), 
		.le(le), 
		.lf(lf), 
		.lg(lg)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    always
		begin
			d = ~d;
			#20;
		end
always		
		begin
			c = ~c;
			#40;
		end	
		always
		begin
			b = ~b;
			#80;
		end	
		always
		begin
			a = ~a;
			#160;
		end		
endmodule

