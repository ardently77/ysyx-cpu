// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top.h for the primary calling header

#ifndef VERILATED_VCPU_TOP___024UNIT_H_
#define VERILATED_VCPU_TOP___024UNIT_H_  // guard

#include "verilated.h"

class Vcpu_top__Syms;

class Vcpu_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_top___024unit(Vcpu_top__Syms* symsp, const char* v__name);
    ~Vcpu_top___024unit();
    VL_UNCOPYABLE(Vcpu_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
