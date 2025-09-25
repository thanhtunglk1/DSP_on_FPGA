// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Start_condition.h for the primary calling header

#include "Vtb_Start_condition__pch.h"
#include "Vtb_Start_condition__Syms.h"
#include "Vtb_Start_condition___024root.h"

void Vtb_Start_condition___024root___ctor_var_reset(Vtb_Start_condition___024root* vlSelf);

Vtb_Start_condition___024root::Vtb_Start_condition___024root(Vtb_Start_condition__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Start_condition___024root___ctor_var_reset(this);
}

void Vtb_Start_condition___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_Start_condition___024root::~Vtb_Start_condition___024root() {
}
