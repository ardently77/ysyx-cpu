// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vour.h for the primary calling header

#ifndef VERILATED_VOUR___024ROOT_H_
#define VERILATED_VOUR___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class Vour__Syms;
class Vour___024unit;


class Vour___024root final : public VerilatedModule {
  public:
    // CELLS
    Vour___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__our__clk;
    CData/*0:0*/ __Vtrigrprev__TOP____Vcellinp__our__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    sc_in<bool> clk;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vour__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vour___024root(Vour__Syms* symsp, const char* v__name);
    ~Vour___024root();
    VL_UNCOPYABLE(Vour___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
