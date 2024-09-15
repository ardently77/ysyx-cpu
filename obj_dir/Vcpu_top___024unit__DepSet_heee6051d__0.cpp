// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu_top__Syms.h"
#include "Vcpu_top___024unit.h"

extern "C" void ebreak(int register_0);

VL_INLINE_OPT void Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ register_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int register_0__Vcvt;
    for (size_t register_0__Vidx = 0; register_0__Vidx < 1; ++register_0__Vidx) register_0__Vcvt = register_0;
    ebreak(register_0__Vcvt);
}
