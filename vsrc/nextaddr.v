module nextaddr(

    input wire[31:0] pc,
   
    output wire[31:0] next_pc

);
    
    assign next_pc = pc+4;
   
    
endmodule