// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Start_condition.h for the primary calling header

#include "Vtb_Start_condition__pch.h"
#include "Vtb_Start_condition__Syms.h"
#include "Vtb_Start_condition___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Start_condition___024root___dump_triggers__act(Vtb_Start_condition___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Start_condition___024root___eval_triggers__act(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_Start_condition__DOT__i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_Start_condition__DOT__i_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_Start_condition__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_clk__0 
        = vlSelf->tb_Start_condition__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_rst_n__0 
        = vlSelf->tb_Start_condition__DOT__i_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Start_condition___024root___dump_triggers__act(vlSelf);
    }
#endif
}
