// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Top_gen_wave.h for the primary calling header

#include "Vtb_Top_gen_wave__pch.h"
#include "Vtb_Top_gen_wave__Syms.h"
#include "Vtb_Top_gen_wave___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__act(Vtb_Top_gen_wave___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Top_gen_wave___024root___eval_triggers__act(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n__0)) 
                                     | ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__i_clk__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n__0 
        = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__i_clk__0 
        = vlSelf->tb_Top_gen_wave__DOT__i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Top_gen_wave___024root___dump_triggers__act(vlSelf);
    }
#endif
}
