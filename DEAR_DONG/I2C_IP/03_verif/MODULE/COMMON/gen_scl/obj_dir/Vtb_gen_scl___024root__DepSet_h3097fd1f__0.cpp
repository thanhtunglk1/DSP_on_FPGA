// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gen_scl.h for the primary calling header

#include "Vtb_gen_scl__pch.h"
#include "Vtb_gen_scl__Syms.h"
#include "Vtb_gen_scl___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_gen_scl___024root___eval_initial__TOP__Vtiming__1(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "COMMON/gen_scl/tb_gen_scl.sv", 
                                           38);
        vlSelf->tb_gen_scl__DOT__clk = (1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__clk)));
        ++(vlSymsp->__Vcoverage[22]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_scl___024root___dump_triggers__act(Vtb_gen_scl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gen_scl___024root___eval_triggers__act(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_gen_scl__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_gen_scl__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_gen_scl__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_gen_scl__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_scl__DOT__clk__0 
        = vlSelf->tb_gen_scl__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_scl__DOT__rst_n__0 
        = vlSelf->tb_gen_scl__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gen_scl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_gen_scl___024root___act_sequent__TOP__0(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->tb_gen_scl__DOT__clk) ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__clk = vlSelf->tb_gen_scl__DOT__clk;
    }
    if (((IData)(vlSelf->tb_gen_scl__DOT__rst_n) ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__rst_n = vlSelf->tb_gen_scl__DOT__rst_n;
    }
    if (((IData)(vlSelf->tb_gen_scl__DOT__i_SCL_start) 
         ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_start))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_start 
            = vlSelf->tb_gen_scl__DOT__i_SCL_start;
    }
    if (((IData)(vlSelf->tb_gen_scl__DOT__i_SCL_en) 
         ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_en))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_en 
            = vlSelf->tb_gen_scl__DOT__i_SCL_en;
    }
    vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick 
        = ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
           == (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR));
    if ((1U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfffeU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (1U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((2U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (2U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((4U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfffbU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (4U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((8U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfff7U & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (8U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xffefU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x10U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xffdfU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x20U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xffbfU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x40U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xff7fU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x80U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfeffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x100U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfdffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x200U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfbffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x400U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xf7ffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x800U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xefffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x1000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xdfffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x2000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xbfffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x4000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0x7fffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x8000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next 
        = (0xffffU & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                      + (IData)(vlSelf->tb_gen_scl__DOT__i_SCL_en)));
    if (((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick) 
         ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_stick))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_stick 
            = vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick;
    }
    if ((1U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfffeU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (1U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((2U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (2U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((4U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfffbU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (4U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((8U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfff7U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (8U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xffefU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x10U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xffdfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x20U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xffbfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x40U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xff7fU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x80U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfeffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x100U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfdffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x200U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfbffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x400U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xf7ffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x800U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xefffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x1000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xdfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x2000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xbfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x4000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0x7fffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x8000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
}

VL_INLINE_OPT void Vtb_gen_scl___024root___nba_sequent__TOP__0(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[75]);
    ++(vlSymsp->__Vcoverage[82]);
    if (vlSelf->tb_gen_scl__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[74]);
        ++(vlSymsp->__Vcoverage[81]);
        if (vlSelf->tb_gen_scl__DOT__i_SCL_start) {
            ++(vlSymsp->__Vcoverage[78]);
        }
        if ((1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__i_SCL_start)))) {
            ++(vlSymsp->__Vcoverage[79]);
            if ((1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick)))) {
                ++(vlSymsp->__Vcoverage[77]);
            }
            if (vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick) {
                ++(vlSymsp->__Vcoverage[76]);
            }
        }
        vlSelf->tb_gen_scl__DOT__dut__DOT__r_count 
            = ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick)
                ? 0U : (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next));
    } else {
        vlSelf->tb_gen_scl__DOT__dut__DOT__r_count = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[73]);
        ++(vlSymsp->__Vcoverage[80]);
    }
    vlSelf->tb_gen_scl__DOT__o_SCL = ((1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__rst_n))) 
                                      || ((1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__i_SCL_start))) 
                                          && (1U & 
                                              ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick)
                                                ? (~ (IData)(vlSelf->tb_gen_scl__DOT__o_SCL))
                                                : (IData)(vlSelf->tb_gen_scl__DOT__o_SCL)))));
    if (((IData)(vlSelf->tb_gen_scl__DOT__o_SCL) ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__o_SCL))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__o_SCL = vlSelf->tb_gen_scl__DOT__o_SCL;
    }
    if ((1U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfffeU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (1U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((2U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (2U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((4U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfffbU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (4U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((8U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfff7U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (8U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xffefU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x10U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xffdfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x20U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xffbfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x40U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xff7fU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x80U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfeffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x100U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfdffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x200U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xfbffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x400U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xf7ffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x800U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xefffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x1000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xdfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x2000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0xbfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x4000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count 
            = ((0x7fffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count)) 
               | (0x8000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfffeU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x7fffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                           >> 1U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x3fffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                           >> 2U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfffbU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x1fffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                           >> 3U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfff7U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0xfffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                          >> 4U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                     >> 4U)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xffefU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x7ffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                          >> 5U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                     >> 5U)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xffdfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x20U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x3ffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                          >> 6U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                     >> 6U)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xffbfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x40U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x1ffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                          >> 7U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                     >> 7U)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xff7fU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x80U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0xffU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                         >> 8U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                    >> 8U)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfeffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x100U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x7fU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                         >> 9U)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                    >> 9U)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfdffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x200U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x3fU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                         >> 0xaU)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                      >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xfbffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x400U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0x1fU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                         >> 0xbU)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                      >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xf7ffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x800U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                        >> 0xcU)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xefffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x1000U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                      >> 0xdU)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                   >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xdfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x2000U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                      >> 0xeU)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                   >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0xbfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x4000U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)) 
                      >> 0xfU)) ^ ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add) 
                                   >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add 
            = ((0x7fffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add)) 
               | (0x8000U & ((IData)(1U) + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count))));
    }
}

VL_INLINE_OPT void Vtb_gen_scl___024root___nba_sequent__TOP__1(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->tb_gen_scl__DOT__clk) ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__clk = vlSelf->tb_gen_scl__DOT__clk;
    }
    if (((IData)(vlSelf->tb_gen_scl__DOT__rst_n) ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__rst_n = vlSelf->tb_gen_scl__DOT__rst_n;
    }
    if (((IData)(vlSelf->tb_gen_scl__DOT__i_SCL_start) 
         ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_start))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_start 
            = vlSelf->tb_gen_scl__DOT__i_SCL_start;
    }
    if (((IData)(vlSelf->tb_gen_scl__DOT__i_SCL_en) 
         ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_en))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_SCL_en 
            = vlSelf->tb_gen_scl__DOT__i_SCL_en;
    }
    if ((1U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfffeU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (1U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((2U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (2U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((4U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfffbU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (4U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((8U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfff7U & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (8U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xffefU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x10U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xffdfU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x20U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xffbfU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x40U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xff7fU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x80U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfeffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x100U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfdffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x200U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xfbffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x400U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xf7ffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x800U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xefffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x1000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xdfffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x2000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0xbfffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x4000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR 
            = ((0x7fffU & (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__i_TWIBR)) 
               | (0x8000U & (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR)));
    }
}

VL_INLINE_OPT void Vtb_gen_scl___024root___nba_comb__TOP__0(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick 
        = ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
           == (IData)(vlSelf->tb_gen_scl__DOT__i_TWIBR));
    vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next 
        = (0xffffU & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count) 
                      + (IData)(vlSelf->tb_gen_scl__DOT__i_SCL_en)));
    if (((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick) 
         ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_stick))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_stick 
            = vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick;
    }
    if ((1U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfffeU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (1U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((2U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (2U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((4U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfffbU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (4U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((8U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
               ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfff7U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (8U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x10U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xffefU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x10U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x20U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xffdfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x20U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x40U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xffbfU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x40U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x80U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                  ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xff7fU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x80U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x100U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfeffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x100U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x200U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfdffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x200U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x400U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xfbffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x400U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x800U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                   ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xf7ffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x800U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x1000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xefffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x1000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x2000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xdfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x2000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x4000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0xbfffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x4000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
    if ((0x8000U & ((IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next) 
                    ^ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next 
            = ((0x7fffU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next)) 
               | (0x8000U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next)));
    }
}
