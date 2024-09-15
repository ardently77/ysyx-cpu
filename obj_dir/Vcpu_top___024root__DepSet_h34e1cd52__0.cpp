// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu_top__Syms.h"
#include "Vcpu_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__ico(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_top___024root___eval_triggers__ico(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ register_0);

VL_INLINE_OPT void Vcpu_top___024root___ico_sequent__TOP__0(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((0x73U == (0x7fU & vlSelf->inst))) {
        Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                               vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                                                               [0U]);
    }
    vlSelf->cpu_top__DOT__alu__DOT__add_result = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 
                                                   vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0xfU))]) 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->inst 
                                                      >> 0x14U)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__act(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_top___024root___eval_triggers__act(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcpu_top___024root___nba_sequent__TOP__0(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0;
    __Vdlyvdim0__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0;
    __Vdlyvval__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0;
    __Vdlyvset__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 = 0U;
    if ((IData)((0x13U == (0x707fU & vlSelf->inst)))) {
        __Vdlyvval__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 
            = vlSelf->cpu_top__DOT__alu__DOT__add_result;
        __Vdlyvset__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 = 1U;
        __Vdlyvdim0__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    vlSelf->cpu_top__DOT__pc = ((IData)(vlSelf->rest)
                                 ? 0x80000000U : vlSelf->cpu_top__DOT__next_pc);
    if (__Vdlyvset__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0) {
        vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf[__Vdlyvdim0__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0] 
            = __Vdlyvval__cpu_top__DOT__regfile__DOT__r0__DOT__rf__v0;
    }
    if ((0x73U == (0x7fU & vlSelf->inst))) {
        Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                               vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                                                               [0U]);
    }
    vlSelf->cpu_top__DOT__alu__DOT__add_result = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 
                                                   vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0xfU))]) 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->inst 
                                                      >> 0x14U)));
    vlSelf->inst_addr = vlSelf->cpu_top__DOT__pc;
    vlSelf->cpu_top__DOT__next_pc = ((IData)(4U) + vlSelf->cpu_top__DOT__pc);
}
