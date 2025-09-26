// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Top_gen_wave.h for the primary calling header

#include "Vtb_Top_gen_wave__pch.h"
#include "Vtb_Top_gen_wave__Syms.h"
#include "Vtb_Top_gen_wave___024root.h"

void Vtb_Top_gen_wave___024root___ctor_var_reset(Vtb_Top_gen_wave___024root* vlSelf);

Vtb_Top_gen_wave___024root::Vtb_Top_gen_wave___024root(Vtb_Top_gen_wave__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Top_gen_wave___024root___ctor_var_reset(this);
}

void Vtb_Top_gen_wave___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_Top_gen_wave___024root::~Vtb_Top_gen_wave___024root() {
}
