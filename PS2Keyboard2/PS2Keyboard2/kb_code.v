module kb_code
   #(parameter W_SIZE = 2) 
   (
    input wire clk, reset,
    input wire ps2d, ps2c, rd_key_code,
    output wire [7:0] key_code,
    output wire kb_buf_empty
   );

   // khai bao hang so
   localparam BRK = 8'hf0; // break code

   // khai bao cac trang thai
   localparam
      wait_brk = 1'b0,
      get_code = 1'b1;

   // thiet lap cac duong tin hieu
   reg state_reg, state_next;
   wire [7:0] scan_out;
   reg got_code_tick;
   wire scan_done_tick;

   // body
   //====================================================
   // instantiation
   //====================================================
   // thiet lap ps2 nhan
   ps2_rx ps2_rx_unit
      (.clk(clk), .reset(reset), .rx_en(1'b1),
       .ps2d(ps2d), .ps2c(ps2c),
       .rx_done_tick(scan_done_tick), .dout(scan_out));

   // Thiet lap bo nhan FIFO
   fifo #(.B(8), .W(W_SIZE)) fifo_key_unit
     (.clk(clk), .reset(reset), .rd(rd_key_code),
      .wr(got_code_tick), .w_data(scan_out),
      .empty(kb_buf_empty), .full(),
      .r_data(key_code));

   //=======================================================
   // FSM se nhan ma quet sau khi nhan duoc F0
   //=======================================================
   // state registers
   always @(posedge clk, posedge reset)
      if (reset)
         state_reg <= wait_brk;
      else
         state_reg <= state_next;

   // next-state logic
   always @*
   begin
      got_code_tick = 1'b0;
      state_next = state_reg;
      case (state_reg)
         wait_brk:  // doi F0 cua break code
            if (scan_done_tick==1'b1 && scan_out==BRK)
               state_next = get_code;
         get_code:  // bat dau scan code
            if (scan_done_tick)
               begin
                  got_code_tick =1'b1;
                  state_next = wait_brk;
               end
      endcase
   end

endmodule
