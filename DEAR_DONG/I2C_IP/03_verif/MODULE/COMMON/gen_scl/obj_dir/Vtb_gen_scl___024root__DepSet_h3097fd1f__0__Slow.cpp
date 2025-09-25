// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gen_scl.h for the primary calling header

#include "Vtb_gen_scl__pch.h"
#include "Vtb_gen_scl__Syms.h"
#include "Vtb_gen_scl___024root.h"

VL_ATTR_COLD void Vtb_gen_scl___024root___eval_initial__TOP(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->tb_gen_scl__DOT__clk = 0U;
    ++(vlSymsp->__Vcoverage[21]);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f73636cU;
    __Vtemp_1[2U] = 0x5f67656eU;
    __Vtemp_1[3U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[23]);
    if ((1U & (~ (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b 
            = (1U | (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b));
    }
    if ((2U & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b 
            = (0xfffdU & (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_scl___024root___dump_triggers__stl(Vtb_gen_scl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gen_scl___024root___eval_triggers__stl(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gen_scl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_gen_scl___024root___stl_sequent__TOP__0(Vtb_gen_scl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___stl_sequent__TOP__0\n"); );
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
    if (((IData)(vlSelf->tb_gen_scl__DOT__o_SCL) ^ (IData)(vlSelf->tb_gen_scl__DOT____Vtogcov__o_SCL))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->tb_gen_scl__DOT____Vtogcov__o_SCL = vlSelf->tb_gen_scl__DOT__o_SCL;
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

VL_ATTR_COLD void Vtb_gen_scl___024root___configure_coverage(Vtb_gen_scl___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "COMMON/gen_scl/tb_gen_scl.sv", 13, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "COMMON/gen_scl/tb_gen_scl.sv", 14, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "COMMON/gen_scl/tb_gen_scl.sv", 15, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_SCL_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "COMMON/gen_scl/tb_gen_scl.sv", 16, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_SCL_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "COMMON/gen_scl/tb_gen_scl.sv", 17, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "i_TWIBR[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "COMMON/gen_scl/tb_gen_scl.sv", 18, 27, ".tb_gen_scl", "v_toggle/tb_gen_scl", "o_SCL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "COMMON/gen_scl/tb_gen_scl.sv", 37, 5, ".tb_gen_scl", "v_line/tb_gen_scl", "block", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "COMMON/gen_scl/tb_gen_scl.sv", 38, 5, ".tb_gen_scl", "v_line/tb_gen_scl", "block", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "COMMON/gen_scl/tb_gen_scl.sv", 40, 5, ".tb_gen_scl", "v_line/tb_gen_scl", "block", "40-42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 4, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 5, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 6, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_SCL_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 7, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_SCL_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 8, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "i_TWIBR[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 9, 33, ".tb_gen_scl.dut", "v_toggle/gen_scl", "o_SCL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 15, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "r_count[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 16, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_next[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 17, 22, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_add[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 18, 7, ".tb_gen_scl.dut", "v_toggle/gen_scl", "w_count_stick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 37, 5, ".tb_gen_scl.dut", "v_branch/gen_scl", "if", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 37, 6, ".tb_gen_scl.dut", "v_branch/gen_scl", "else", "39-40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 36, 1, ".tb_gen_scl.dut", "v_line/gen_scl", "block", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 51, 13, ".tb_gen_scl.dut", "v_branch/gen_scl", "if", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 51, 14, ".tb_gen_scl.dut", "v_branch/gen_scl", "else", "53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 48, 9, ".tb_gen_scl.dut", "v_branch/gen_scl", "if", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 48, 10, ".tb_gen_scl.dut", "v_branch/gen_scl", "else", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 45, 5, ".tb_gen_scl.dut", "v_branch/gen_scl", "if", "45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 45, 6, ".tb_gen_scl.dut", "v_branch/gen_scl", "else", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/gen_scl.sv", 44, 1, ".tb_gen_scl.dut", "v_line/gen_scl", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 4, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 5, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "i_operate_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "COMMON/gen_scl/../../../../02_rtl/COMMON/add_algo.sv", 6, 34, ".tb_gen_scl.dut.add_algo_unit", "v_toggle/add_algo", "o_add[15]", "");
}
