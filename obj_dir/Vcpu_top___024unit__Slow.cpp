// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu_top__Syms.h"
#include "Vcpu_top___024unit.h"

void Vcpu_top___024unit___ctor_var_reset(Vcpu_top___024unit* vlSelf);

Vcpu_top___024unit::Vcpu_top___024unit(Vcpu_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu_top___024unit___ctor_var_reset(this);
}

void Vcpu_top___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcpu_top___024unit::~Vcpu_top___024unit() {
}
