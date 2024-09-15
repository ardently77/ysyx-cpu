module pc_reg(
    
    input wire clk,
    input wire[31:0] next_pc,
    input wire rest,

    output reg[31:0] pc
);
    
    // always @(posedge clk) begin
    // if (rest) pc <= 0;
    // else pc <= next_pc;
    // end

    Reg #(32,32'h80000000) i0 (clk,rest,next_pc[31:0],pc[31:0],1'b1);


   
    
endmodule
