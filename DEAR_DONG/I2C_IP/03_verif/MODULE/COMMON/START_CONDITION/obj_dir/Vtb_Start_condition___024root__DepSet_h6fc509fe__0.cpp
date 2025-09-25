// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Start_condition.h for the primary calling header

#include "Vtb_Start_condition__pch.h"
#include "Vtb_Start_condition___024root.h"

VL_ATTR_COLD void Vtb_Start_condition___024root___eval_initial__TOP(Vtb_Start_condition___024root* vlSelf);
VlCoroutine Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__0(Vtb_Start_condition___024root* vlSelf);
VlCoroutine Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__1(Vtb_Start_condition___024root* vlSelf);

void Vtb_Start_condition___024root___eval_initial(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_initial\n"); );
    // Body
    Vtb_Start_condition___024root___eval_initial__TOP(vlSelf);
    Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_clk__0 
        = vlSelf->tb_Start_condition__DOT__i_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_rst_n__0 
        = vlSelf->tb_Start_condition__DOT__i_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__0(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_Start_condition__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                           26);
        vlSelf->tb_Start_condition__DOT__i_clk = (1U 
                                                  & (~ (IData)(vlSelf->tb_Start_condition__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__1(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_Start_condition__DOT__i_rst_n = 0U;
    vlSelf->tb_Start_condition__DOT__i_SCL = 1U;
    vlSelf->tb_Start_condition__DOT__i_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                       38);
    vlSelf->tb_Start_condition__DOT__i_rst_n = 1U;
    vlSelf->tb_Start_condition__DOT__i_SCL = 1U;
    vlSelf->tb_Start_condition__DOT__i_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                       43);
    co_await vlSelf->__VtrigSched_hf1e3ff26__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Start_condition.i_clk)", 
                                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                                       44);
    vlSelf->tb_Start_condition__DOT__i_SCL = 1U;
    vlSelf->tb_Start_condition__DOT__i_en = 1U;
    co_await vlSelf->__VtrigSched_hf1e3ff26__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Start_condition.i_clk)", 
                                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                                       47);
    vlSelf->tb_Start_condition__DOT__i_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                       50);
    co_await vlSelf->__VtrigSched_hf1e3ff26__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Start_condition.i_clk)", 
                                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                                       51);
    vlSelf->tb_Start_condition__DOT__i_SCL = 0U;
    vlSelf->tb_Start_condition__DOT__i_en = 1U;
    co_await vlSelf->__VtrigSched_hf1e3ff26__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Start_condition.i_clk)", 
                                                       "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                                       54);
    vlSelf->tb_Start_condition__DOT__i_en = 0U;
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       nullptr, "COMMON/START_CONDITION/tb_Start_condition.sv", 
                                       57);
    VL_WRITEF_NX("End simulation\n\n",0);
    VL_FINISH_MT("COMMON/START_CONDITION/tb_Start_condition.sv", 59, "");
}

void Vtb_Start_condition___024root___act_comb__TOP__0(Vtb_Start_condition___024root* vlSelf);

void Vtb_Start_condition___024root___eval_act(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Start_condition___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_Start_condition__ConstPool__TABLE_h41d3666a_0;

VL_INLINE_OPT void Vtb_Start_condition___024root___act_comb__TOP__0(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->tb_Start_condition__DOT__i_SCL) 
                     << 3U) | (((IData)(vlSelf->tb_Start_condition__DOT__DUT__DOT__w_en) 
                                << 2U) | (IData)(vlSelf->tb_Start_condition__DOT__DUT__DOT__phase)));
    vlSelf->tb_Start_condition__DOT__DUT__DOT__n_phase 
        = Vtb_Start_condition__ConstPool__TABLE_h41d3666a_0
        [__Vtableidx1];
}

void Vtb_Start_condition___024root___nba_sequent__TOP__0(Vtb_Start_condition___024root* vlSelf);

void Vtb_Start_condition___024root___eval_nba(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Start_condition___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Start_condition___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 8> Vtb_Start_condition__ConstPool__TABLE_h3d313f96_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_Start_condition__ConstPool__TABLE_hab9e30f9_0;

VL_INLINE_OPT void Vtb_Start_condition___024root___nba_sequent__TOP__0(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_Start_condition__DOT__DUT__DOT__w_en 
        = ((IData)(vlSelf->tb_Start_condition__DOT__i_rst_n) 
           && ((IData)(vlSelf->tb_Start_condition__DOT__i_en) 
               & (~ (IData)(vlSelf->tb_Start_condition__DOT__DUT__DOT__Detect_edge_unit__DOT__w_p_signal))));
    __Vtableidx2 = (((IData)(vlSelf->tb_Start_condition__DOT__DUT__DOT__phase) 
                     << 1U) | (IData)(vlSelf->tb_Start_condition__DOT__i_rst_n));
    vlSelf->tb_Start_condition__DOT__o_SDA = Vtb_Start_condition__ConstPool__TABLE_h3d313f96_0
        [__Vtableidx2];
    vlSelf->tb_Start_condition__DOT__o_done = Vtb_Start_condition__ConstPool__TABLE_hab9e30f9_0
        [__Vtableidx2];
    vlSelf->tb_Start_condition__DOT__DUT__DOT__Detect_edge_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Start_condition__DOT__i_rst_n) 
           && (IData)(vlSelf->tb_Start_condition__DOT__i_en));
    vlSelf->tb_Start_condition__DOT__DUT__DOT__phase 
        = ((IData)(vlSelf->tb_Start_condition__DOT__i_rst_n)
            ? (IData)(vlSelf->tb_Start_condition__DOT__DUT__DOT__n_phase)
            : 0U);
}

void Vtb_Start_condition___024root___timing_resume(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf1e3ff26__0.resume("@(posedge tb_Start_condition.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_Start_condition___024root___timing_commit(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf1e3ff26__0.commit("@(posedge tb_Start_condition.i_clk)");
    }
}

void Vtb_Start_condition___024root___eval_triggers__act(Vtb_Start_condition___024root* vlSelf);

bool Vtb_Start_condition___024root___eval_phase__act(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Start_condition___024root___eval_triggers__act(vlSelf);
    Vtb_Start_condition___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_Start_condition___024root___timing_resume(vlSelf);
        Vtb_Start_condition___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_Start_condition___024root___eval_phase__nba(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Start_condition___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Start_condition___024root___dump_triggers__nba(Vtb_Start_condition___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Start_condition___024root___dump_triggers__act(Vtb_Start_condition___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Start_condition___024root___eval(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_Start_condition___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("COMMON/START_CONDITION/tb_Start_condition.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_Start_condition___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("COMMON/START_CONDITION/tb_Start_condition.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_Start_condition___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_Start_condition___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Start_condition___024root___eval_debug_assertions(Vtb_Start_condition___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
