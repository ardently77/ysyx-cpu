module alu(

    input wire[31:0] alu_src1,
    input wire[31:0] alu_src2,

    output wire[31:0] alu_result

);
    
    wire[31:0] add_result;
    wire[31:0] add_a;
    wire[31:0] add_b;
    wire cin;

    assign cin = 0;
    assign add_a = alu_src1;
    assign add_b = {32{cin}} ^ alu_src2;
    assign add_result = add_a + add_b + {32{cin}};

    assign alu_result = add_result;
    
endmodule
