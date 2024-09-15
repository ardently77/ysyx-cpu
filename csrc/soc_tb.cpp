#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vcpu_top.h"
#include "svdpi.h"
#include "Vcpu_top__Dpi.h"

uint32_t CONFIG_MBASE=0x80000000;
#define CONFIG_MSIZE 16

#define PG_ALIGN __attribute((aligned(4096)))
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

#define MAX_SIM_TIME 24
vluint64_t sim_time=0;

static const uint32_t img[]={
    0x00000093,
    0x00108113,
    0x00110193,
    0x00100073,
};

void ebreak(int register_0){
    sim_time=MAX_SIM_TIME;
    printf("stop");
}

void init_memory(){
    memcpy(pmem, img, sizeof(img));
}

uint32_t pmem_read(uint32_t pc){

    return *(uint32_t *)(pc+pmem-CONFIG_MBASE);
}


int main(int argc,char** argv,char** env){

    Vcpu_top *top=new Vcpu_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace=new VerilatedVcdC;
    top->trace(m_trace,0);
    m_trace->open("wave.vcd");

    top->rest=1;top->clk=1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    top->rest=1;top->clk=0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    top->rest=1;top->clk=1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    init_memory();
    

    while(sim_time<MAX_SIM_TIME){
        top->rest=0;
        top->clk^=1;
        top->inst=pmem_read(top->inst_addr);
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete top;
    exit(EXIT_SUCCESS);
}
