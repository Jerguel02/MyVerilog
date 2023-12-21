`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:29:18 12/16/2023
// Design Name:   Led7SegAnode
// Module Name:   D:/Verilog/Led7Seg_Anode/Led7Seg_Anode_Testbench.v
// Project Name:  Led7Seg_Anode
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Led7SegAnode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Led7Seg_Anode_Testbench;

	// Inputs
	reg i3;
	reg i2;
	reg i1;
	reg i0;

	// Outputs
	wire la;
	wire lb;
	wire lc;
	wire ld;
	wire le;
	wire lf;
	wire lg;

	// Instantiate the Unit Under Test (UUT)
	Led7SegAnode uut (
		.i3(i3), 
		.i2(i2), 
		.i1(i1), 
		.i0(i0), 
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
		i3 = 0;
		i2 = 0;
		i1 = 0;
		i0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
            always
		begin
			i3 = ~i3;
			#20;
		end
		always
		begin
			i2 = ~i2;
			#40;
		end
		always
		begin
			i1 = ~i1;
			#80;
		end
		always
		begin
			i0 = ~i0;
			#160;
		end
endmodule

