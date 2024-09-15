//触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule


module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,

  input wire[ADDR_WIDTH-1:0] raddr1,
  output wire[DATA_WIDTH-1:0] rdata1,

  input wire[ADDR_WIDTH-1:0] raddr2,
  output wire[DATA_WIDTH-1:0] rdata2,

  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input we,

  output [DATA_WIDTH-1:0] register_0
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (we) rf[waddr] <= wdata;
  end
  assign rdata1=(raddr1==5'b0)?32'b0:rf[raddr1];
  assign rdata2=(raddr2==5'b0)?32'b0:rf[raddr2];
  assign register_0=rf[0];
endmodule
