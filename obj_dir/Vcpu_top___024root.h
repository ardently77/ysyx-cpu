// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top.h for the primary calling header

#ifndef VERILATED_VCPU_TOP___024ROOT_H_
#define VERILATED_VCPU_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu_top__Syms;
class Vcpu_top___024unit;


class Vcpu_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcpu_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rest,0,0);
    CData/*4:0*/ cpu_top__DOT__regfile__DOT__raddr2;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(inst_addr,31,0);
    IData/*31:0*/ cpu_top__DOT__next_pc;
    IData/*31:0*/ cpu_top__DOT__pc;
    IData/*31:0*/ cpu_top__DOT__alu__DOT__add_result;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> cpu_top__DOT__regfile__DOT__r0__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_top___024root(Vcpu_top__Syms* symsp, const char* v__name);
    ~Vcpu_top___024root();
    VL_UNCOPYABLE(Vcpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
