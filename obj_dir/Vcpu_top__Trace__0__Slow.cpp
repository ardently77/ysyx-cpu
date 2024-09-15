// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


VL_ATTR_COLD void Vcpu_top___024root__trace_init_sub__TOP__0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rest", false,-1);
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+40,"inst_addr", false,-1, 31,0);
    tracep->pushNamePrefix("cpu_top ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rest", false,-1);
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+40,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+41,"op", false,-1, 6,0);
    tracep->declBus(c+42,"rs1", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"busa", false,-1, 31,0);
    tracep->declBus(c+47,"busw", false,-1, 31,0);
    tracep->declBit(c+48,"regwr", false,-1);
    tracep->declBus(c+1,"register_0", false,-1, 31,0);
    tracep->declBus(c+2,"next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+46,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+45,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+47,"alu_result", false,-1, 31,0);
    tracep->declBus(c+47,"add_result", false,-1, 31,0);
    tracep->declBus(c+46,"add_a", false,-1, 31,0);
    tracep->declBus(c+45,"add_b", false,-1, 31,0);
    tracep->declBit(c+49,"cin", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBus(c+41,"op", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"register_0", false,-1, 31,0);
    tracep->declBit(c+48,"regwr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+41,"op", false,-1, 6,0);
    tracep->declBus(c+42,"rs1", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+45,"immI", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nextaddr ");
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+2,"next_pc", false,-1, 31,0);
    tracep->declBit(c+38,"rest", false,-1);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+50,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rst", false,-1);
    tracep->declBus(c+2,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+42,"raddr1", false,-1, 4,0);
    tracep->declBus(c+46,"rdata1", false,-1, 31,0);
    tracep->declBus(c+53,"raddr2", false,-1, 4,0);
    tracep->declBus(c+4,"rdata2", false,-1, 31,0);
    tracep->declBit(c+48,"we", false,-1);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+1,"register_0", false,-1, 31,0);
    tracep->pushNamePrefix("r0 ");
    tracep->declBus(c+54,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+42,"raddr1", false,-1, 4,0);
    tracep->declBus(c+46,"rdata1", false,-1, 31,0);
    tracep->declBus(c+53,"raddr2", false,-1, 4,0);
    tracep->declBus(c+4,"rdata2", false,-1, 31,0);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBit(c+48,"we", false,-1);
    tracep->declBus(c+1,"register_0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu_top___024root__trace_init_top(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_init_top\n"); );
    // Body
    Vcpu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_top___024root__trace_register(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_top___024root__trace_full_sub_0(Vcpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_full_top_0\n"); );
    // Init
    Vcpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_top___024root__trace_full_sub_0(Vcpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                            [0U]),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->cpu_top__DOT__pc)),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu_top__DOT__pc),32);
    bufp->fullIData(oldp+4,(((0U == (IData)(vlSelf->cpu_top__DOT__regfile__DOT__raddr2))
                              ? 0U : vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                             [vlSelf->cpu_top__DOT__regfile__DOT__raddr2])),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[31]),32);
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullBit(oldp+38,(vlSelf->rest));
    bufp->fullIData(oldp+39,(vlSelf->inst),32);
    bufp->fullIData(oldp+40,(vlSelf->inst_addr),32);
    bufp->fullCData(oldp+41,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+44,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullIData(oldp+45,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+46,(((0U == (0x1fU & (vlSelf->inst 
                                               >> 0xfU)))
                               ? 0U : vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+47,((((0U == (0x1fU & (vlSelf->inst 
                                                >> 0xfU)))
                                ? 0U : vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                               [(0x1fU & (vlSelf->inst 
                                          >> 0xfU))]) 
                              + (((- (IData)((vlSelf->inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->inst 
                                              >> 0x14U)))),32);
    bufp->fullBit(oldp+48,((IData)((0x13U == (0x707fU 
                                              & vlSelf->inst)))));
    bufp->fullBit(oldp+49,(0U));
    bufp->fullIData(oldp+50,(0x20U),32);
    bufp->fullIData(oldp+51,(0x80000000U),32);
    bufp->fullBit(oldp+52,(1U));
    bufp->fullCData(oldp+53,(vlSelf->cpu_top__DOT__regfile__DOT__raddr2),5);
    bufp->fullIData(oldp+54,(5U),32);
}
