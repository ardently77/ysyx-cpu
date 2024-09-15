module cpu_top(
    
    input wire clk,
    input wire rest,
    input wire[31:0] inst,

    output wire[31:0] inst_addr

);
   
    wire[6:0] op;
    wire[4:0] rs1;
    wire[4:0] rd;
    wire[2:0] funct3;
    wire[31:0] imm;

    decode decode(.inst(inst),

                  .funct3(funct3),
                  .op(op),
                  .rs1(rs1),
                  .rd(rd),
                  .imm(imm));

    wire[31:0] busa;
    wire[31:0] busw;
    wire regwr;
    wire[31:0] register_0;

    regfile regfile(.clk(clk),

                    .raddr1(rs1),
                    .rdata1(busa),

                    .raddr2(),
                    .rdata2(),

                    .we(regwr),
                    .waddr(rd),
                    .wdata(busw),
                    .register_0(register_0));

    alu alu(.alu_src1(busa),
            .alu_src2(imm),

            .alu_result(busw));

    ctrl ctrl(.op(op),
              .funct3(funct3),
              .register_0(register_0),
              
              .regwr(regwr));


    wire[31:0] next_pc;
    wire[31:0] pc;

    pc_reg pc_reg(.clk(clk),
                  .rest(rest),
                  .next_pc(next_pc),
                  .pc(pc));
    
    nextaddr nextaddr(.pc(pc),
                      .next_pc(next_pc));

    assign inst_addr = pc;
endmodule