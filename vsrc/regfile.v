module regfile (
    
    input wire clk,

    input wire[4:0] raddr1,
    output wire[31:0] rdata1,

    input wire[4:0] raddr2,
    output wire[31:0] rdata2,

    input wire we,
    input wire [4:0] waddr,
    input wire [31:0] wdata,

    output wire[31:0] register_0

);

    // reg[31:0] regfiles[31:0];
    
    // always @(posedge clk) begin
    //     if(we)begin
    //         regfiles[waddr] <= wdata;
    //     end
    // end

    // assign rdata1 = (raddr1 == 5'b0) ? 32'b0 : regfiles[raddr1];
    // assign rdata2 = (raddr2 == 5'b0) ? 32'b0 : regfiles[raddr2];

    RegisterFile #(5,32) r0 (clk,raddr1[4:0],rdata1[31:0],raddr2[4:0],rdata2[31:0],wdata[31:0],waddr[4:0],we,register_0[31:0]);

endmodule