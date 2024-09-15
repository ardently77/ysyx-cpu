module decode(
    
    input wire[31:0] inst,

    output wire[6:0] op,
    output wire[4:0] rs1,
    output wire[4:0] rd,
    output wire[2:0] funct3,
    output wire[31:0] imm

);

    assign op = inst[6:0];
    assign rd = inst[11:7];
    assign rs1 = inst[19:15];
    assign funct3 = inst[14:12];
    
    wire[31:0]immI;

    assign immI = {{20{inst[31]}},inst[31:20]};

    assign imm = immI;
    
endmodule