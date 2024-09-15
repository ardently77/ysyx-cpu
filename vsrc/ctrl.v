import "DPI-C" function void ebreak(input int register_0);

module ctrl(

    input wire[6:0] op,
    input wire[2:0] funct3,
    input wire[31:0] register_0,

    output wire regwr

);
    assign regwr = (op == 7'b0010011) && (funct3 == 3'b000);

		always @(*) begin
        if(op == 7'b1110011) ebreak(register_0);
    end 

    
endmodule
