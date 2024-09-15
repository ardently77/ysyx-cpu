// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu_top__Syms.h"
#include "Vcpu_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__stl(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_top___024root___eval_triggers__stl(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ register_0);

VL_ATTR_COLD void Vcpu_top___024root___stl_sequent__TOP__0(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x73U == (0x7fU & vlSelf->inst))) {
        Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                               vlSelf->cpu_top__DOT__regfile__DOT__r0__DOT__rf
                                                               [0U]);
    }
    vlSelf->inst_addr = vlSelf->cpu_top__DOT__pc;
    vlSelf->cpu_top__DOT__next_pc = ((IData)(4U) + vlSelf->cpu_top__DOT__pc);
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
