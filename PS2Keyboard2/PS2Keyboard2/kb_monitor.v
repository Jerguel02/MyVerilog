module kb_monitor
   (
    input wire clk, reset,
    input wire ps2d, ps2c,
    output wire tx
   );

   localparam SP=8'h20; // ki tu space ASCII
	
	// Cac trang thai
   localparam [1:0]
      idle  = 2'b00,
      send  = 2'b01,
      sendb = 2'b10;


   reg [1:0] state_reg, state_next;
   reg [7:0] w_data;
   wire [7:0] scan_data;
   reg wr_uart;
   wire scan_done_tick;
	wire [7:0] ascii_code;


	// Bo nhan
   ps2_rx ps2_rx_unit
      (.clk(clk), .reset(reset), .rx_en(1'b1),
       .ps2d(ps2d), .ps2c(ps2c),
       .rx_done_tick(scan_done_tick), .dout(scan_data));

   // Uart
   uart uart_unit
      (.clk(clk), .reset(reset), .rd_uart(1'b0),
       .wr_uart(wr_uart), .rx(1'b1), .w_data(w_data),
       .tx_full(), .rx_empty(), .r_data(), .tx(tx));
		 
	key2ascii key2a_unit(.key_code(scan_data), .ascii_code(ascii_code));

   //Máy trang thai gui 2 ki tu
   always @(posedge clk, posedge reset)
      if (reset)
         state_reg <= idle;
      else
         state_reg <= state_next;

   always @*
   begin
      wr_uart = 1'b0;
      w_data = SP;
      state_next = state_reg;
      case (state_reg)
         idle:
            if (scan_done_tick) // Scan rx_done_tick len 1
               state_next = send;
         send: // Gui kí tu
            begin
               w_data = ascii_code;
               wr_uart = 1'b1;
               state_next = sendb;
            end
         sendb:  // Gui ki tu SPACE
            begin
               w_data = SP;
               wr_uart = 1'b1;
               state_next = idle;
            end
      endcase
   end

	 
endmodule