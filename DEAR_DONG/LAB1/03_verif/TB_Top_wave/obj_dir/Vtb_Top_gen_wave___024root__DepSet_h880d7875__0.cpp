// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Top_gen_wave.h for the primary calling header

#include "Vtb_Top_gen_wave__pch.h"
#include "Vtb_Top_gen_wave___024root.h"

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_initial__TOP(Vtb_Top_gen_wave___024root* vlSelf);
VlCoroutine Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__0(Vtb_Top_gen_wave___024root* vlSelf);
VlCoroutine Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__1(Vtb_Top_gen_wave___024root* vlSelf);

void Vtb_Top_gen_wave___024root___eval_initial(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_initial\n"); );
    // Body
    Vtb_Top_gen_wave___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n__0 
        = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__i_clk__0 
        = vlSelf->tb_Top_gen_wave__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__0(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_Top_gen_wave__DOT__i_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "TB_Top_wave/tb_Top_gen_wave.sv", 
                                           76);
        vlSelf->tb_Top_gen_wave__DOT__i_clk = (1U & 
                                               (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__i_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__1(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__0__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__0__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__1__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__1__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__2__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__2__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__3__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__3__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__4__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__4__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__5__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__5__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__6__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__6__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__7__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__7__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__8__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__8__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__9__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__9__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__10__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__10__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__11__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__11__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__12__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__12__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__13__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__13__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__14__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__14__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__15__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__15__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__16__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__16__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__17__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__17__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__18__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__18__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__19__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__19__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__20__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__20__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__21__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__21__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__22__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__22__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__23__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__23__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__24__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__24__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__25__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__25__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__26__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__26__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__27__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__27__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__28__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__28__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__29__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__29__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__30__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__30__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__31__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__31__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__32__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__32__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__33__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__33__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__34__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__34__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__35__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__35__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__36__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__36__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__37__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__37__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__38__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__38__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__39__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__39__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__40__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__40__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__41__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__41__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__42__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__42__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__43__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__43__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__44__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__44__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__45__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__45__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__46__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__46__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__47__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__47__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__48__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__48__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__49__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__49__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__50__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__50__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__51__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__51__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__52__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__52__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__53__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__53__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__54__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__54__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__55__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__55__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__56__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__56__idx = 0;
    IData/*31:0*/ __Vtask_tb_Top_gen_wave__DOT__press_button__57__idx;
    __Vtask_tb_Top_gen_wave__DOT__press_button__57__idx = 0;
    // Body
    vlSelf->tb_Top_gen_wave__DOT__i_btn = 0xfU;
    vlSelf->tb_Top_gen_wave__DOT__i_sw = 0U;
    vlSelf->tb_Top_gen_wave__DOT__i_sw = (0x1ffU & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw));
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_sw = (0x200U | (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw));
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("----- Test 1: Mode waveform, mode wave -----\n",0);
    vlSelf->tb_Top_gen_wave__DOT__i_sw = (0x201U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw));
    __Vtask_tb_Top_gen_wave__DOT__press_button__0__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__0__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__0__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__1__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__1__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__1__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__2__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__2__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__2__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__3__idx = 1U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__3__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__3__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__4__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__4__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__4__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__5__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__5__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__5__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__6__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__6__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__6__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__7__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__7__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__7__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__8__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__8__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__8__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__9__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__9__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__9__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__10__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__10__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__10__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__11__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__11__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__11__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__12__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__12__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__12__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__13__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__13__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__13__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__14__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__14__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__14__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__15__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__15__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__15__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__16__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__16__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__16__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__17__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__17__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__17__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("----- Test 2: Mode noise, mode wave -----\n",0);
    vlSelf->tb_Top_gen_wave__DOT__i_sw = (0x80U | (0x201U 
                                                   & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw)));
    __Vtask_tb_Top_gen_wave__DOT__press_button__18__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__18__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__18__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__19__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__19__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__19__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__20__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__20__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__20__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__21__idx = 1U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__21__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__21__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__22__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__22__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__22__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__23__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__23__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__23__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__24__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__24__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__24__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__25__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__25__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__25__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__26__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__26__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__26__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__27__idx = 1U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__27__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__27__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__28__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__28__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__28__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__29__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__29__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__29__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__30__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__30__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__30__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__31__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__31__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__31__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__32__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__32__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__32__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__33__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__33__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__33__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__34__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__34__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__34__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__35__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__35__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__35__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__36__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__36__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__36__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__37__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__37__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__37__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       169);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("----- Test 3: Mode waveform with noise, mode wave -----\n",0);
    vlSelf->tb_Top_gen_wave__DOT__i_sw = (0x100U | 
                                          (0x201U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw)));
    __Vtask_tb_Top_gen_wave__DOT__press_button__38__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__38__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__38__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__39__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__39__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__39__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__40__idx = 0U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__40__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__40__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__41__idx = 1U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__41__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__41__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__42__idx = 1U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__42__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__42__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__43__idx = 1U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__43__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__43__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       182);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__44__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__44__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__44__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__45__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__45__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__45__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__46__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__46__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__46__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__47__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__47__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__47__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__48__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__48__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__48__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__49__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__49__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__49__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__50__idx = 2U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__50__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__50__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__51__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__51__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__51__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__52__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__52__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__52__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__53__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__53__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__53__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__54__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__54__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__54__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__55__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__55__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__55__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__56__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__56__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__56__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_Top_gen_wave__DOT__press_button__57__idx = 3U;
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((~ ((IData)(1U) 
                                               << (3U 
                                                   & __Vtask_tb_Top_gen_wave__DOT__press_button__57__idx))) 
                                           & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn));
    co_await vlSelf->__VtrigSched_h9177e31c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_Top_gen_wave.i_clk)", 
                                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Top_gen_wave__DOT__i_btn = ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                           | (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_tb_Top_gen_wave__DOT__press_button__57__idx))));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("----- Test 4: Mode Noise, mode wave -----\n",0);
    vlSelf->tb_Top_gen_wave__DOT__i_sw = (0x100U | 
                                          (0x201U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw)));
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "TB_Top_wave/tb_Top_gen_wave.sv", 
                                       207);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("End of Test\n",0);
    VL_FINISH_MT("TB_Top_wave/tb_Top_gen_wave.sv", 209, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtb_Top_gen_wave___024root___act_comb__TOP__0(Vtb_Top_gen_wave___024root* vlSelf);

void Vtb_Top_gen_wave___024root___eval_act(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Top_gen_wave___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_Top_gen_wave___024root___act_comb__TOP__0(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4 
        = (IData)((0x60U == (0x60U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n 
        = (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                 >> 9U));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise 
        = (IData)((0x80U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave 
        = (IData)((0U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__o_ledr = ((0x1ffU 
                                             & (IData)(vlSelf->tb_Top_gen_wave__DOT__o_ledr)) 
                                            | ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
                                               << 9U));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
}

void Vtb_Top_gen_wave___024root___nba_sequent__TOP__0(Vtb_Top_gen_wave___024root* vlSelf);
void Vtb_Top_gen_wave___024root___nba_comb__TOP__0(Vtb_Top_gen_wave___024root* vlSelf);
void Vtb_Top_gen_wave___024root___nba_comb__TOP__1(Vtb_Top_gen_wave___024root* vlSelf);

void Vtb_Top_gen_wave___024root___eval_nba(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Top_gen_wave___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Top_gen_wave___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Top_gen_wave___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

extern const VlUnpacked<CData/*6:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h5a7f7c5f_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h862118a6_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h03d717b3_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h27e49da7_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vtb_Top_gen_wave__ConstPool__TABLE_h91655a8e_0;

VL_INLINE_OPT void Vtb_Top_gen_wave___024root___nba_sequent__TOP__0(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) {
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) {
            vlSelf->tb_Top_gen_wave__DOT__o_hex_2 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_2;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_0 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_5 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_4 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_3 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_1 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1;
        } else if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) {
            vlSelf->tb_Top_gen_wave__DOT__o_hex_2 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_2;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_0 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_5 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_4 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_3 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_1 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1;
        } else {
            vlSelf->tb_Top_gen_wave__DOT__o_hex_2 = vlSelf->tb_Top_gen_wave__DOT__o_hex_2;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_0 = vlSelf->tb_Top_gen_wave__DOT__o_hex_0;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_5 = vlSelf->tb_Top_gen_wave__DOT__o_hex_5;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_4 = vlSelf->tb_Top_gen_wave__DOT__o_hex_4;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_3 = vlSelf->tb_Top_gen_wave__DOT__o_hex_3;
            vlSelf->tb_Top_gen_wave__DOT__o_hex_1 = vlSelf->tb_Top_gen_wave__DOT__o_hex_1;
        }
        if ((IData)(((0x100U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))) 
                     & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1)))) {
            vlSelf->tb_Top_gen_wave__DOT__o_add_noise 
                = (1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__o_add_noise)));
        }
        vlSelf->tb_Top_gen_wave__DOT__o_sel_wave = 
            (7U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                   >> 4U));
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en) {
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0;
        }
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en) {
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0;
        }
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en) {
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave 
                = (0x1ffU & ((0x200U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase))
                              ? (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase)
                              : ((IData)(1U) + (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase)))));
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_next_step_phase;
        }
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en) {
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave 
                = (0x1ffU & ((0x200U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase))
                              ? (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase)
                              : ((IData)(1U) + (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase)))));
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_next_step_phase;
        }
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en) {
            if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode) {
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step = 0xfU;
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1 = 0x7fU;
            } else {
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step = 1U;
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1 = 0x7dU;
            }
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0 = 0x4fU;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode;
        }
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en) {
            if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode) {
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step = 0xfU;
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1 = 0x7fU;
            } else {
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step = 1U;
                vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1 = 0x7dU;
            }
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0 = 0x4fU;
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode;
        }
        if (vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1) {
            vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle 
                = (7U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                         >> 1U));
        }
        if (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
             & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn))) {
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_next_gain;
        }
        if (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
             & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn))) {
            vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise 
                = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_next_gain;
        }
        if (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1) 
             & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise))) {
            vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin 
                = ((~ ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                           >> 4U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4))) 
                   & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4) 
                      & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                         >> 4U)));
        }
    } else {
        vlSelf->tb_Top_gen_wave__DOT__o_hex_2 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__o_hex_0 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__o_hex_5 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__o_hex_4 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__o_add_noise = 0U;
        vlSelf->tb_Top_gen_wave__DOT__o_hex_3 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__o_hex_1 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__o_sel_wave = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step = 1U;
        vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle = 4U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave = 4U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise = 1U;
        vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5 = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5 = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4 = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4 = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3 = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3 = 1U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1 = 0x7fU;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode = 0U;
        vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode = 0U;
    }
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 3U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_3__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 2U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_2__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)) 
               & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_0__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)) 
               & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 3U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)) 
               & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)) 
               & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 3U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)) 
               & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode 
        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode)));
    __Vtableidx5 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h5a7f7c5f_0
        [__Vtableidx5];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode 
        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode)));
    __Vtableidx1 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h5a7f7c5f_0
        [__Vtableidx1];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_3__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 3U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_2__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 2U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_0__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 3U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 3U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_next_gain 
        = (0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step) 
                   + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 2U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_next_gain 
        = (0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step) 
                   + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 2U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal)));
    vlSelf->tb_Top_gen_wave__DOT__o_ledr = ((0x300U 
                                             & (IData)(vlSelf->tb_Top_gen_wave__DOT__o_ledr)) 
                                            | (((IData)(vlSelf->tb_Top_gen_wave__DOT__o_sel_wave) 
                                                << 5U) 
                                               | (((IData)(vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_Top_gen_wave__DOT__o_add_noise)))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                   >> 1U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit__DOT__w_p_signal)));
    __Vtableidx2 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h862118a6_0
        [__Vtableidx2];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h03d717b3_0
        [__Vtableidx2];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h27e49da7_0
        [__Vtableidx2];
    __Vtableidx6 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h862118a6_0
        [__Vtableidx6];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h03d717b3_0
        [__Vtableidx6];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h27e49da7_0
        [__Vtableidx6];
    __Vtableidx3 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h91655a8e_0
        [__Vtableidx3];
    __Vtableidx4 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h91655a8e_0
        [__Vtableidx4];
    __Vtableidx7 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h91655a8e_0
        [__Vtableidx7];
    __Vtableidx8 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h91655a8e_0
        [__Vtableidx8];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_next_step_phase 
        = (0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase) 
                     + ((0x180U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_next_step_phase 
        = (0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase) 
                     + ((0x180U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 2U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 2U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit__DOT__w_p_signal 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
           && (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                     >> 1U)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode 
        = (1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode 
        = (1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode)));
}

VL_INLINE_OPT void Vtb_Top_gen_wave___024root___nba_comb__TOP__0(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave 
        = (IData)((0U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4 
        = (IData)((0x60U == (0x60U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise 
        = (IData)((0x80U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
}

VL_INLINE_OPT void Vtb_Top_gen_wave___024root___nba_comb__TOP__1(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en 
        = ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
           & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
}

void Vtb_Top_gen_wave___024root___timing_resume(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9177e31c__0.resume("@(posedge tb_Top_gen_wave.i_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_Top_gen_wave___024root___timing_commit(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9177e31c__0.commit("@(posedge tb_Top_gen_wave.i_clk)");
    }
}

void Vtb_Top_gen_wave___024root___eval_triggers__act(Vtb_Top_gen_wave___024root* vlSelf);

bool Vtb_Top_gen_wave___024root___eval_phase__act(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Top_gen_wave___024root___eval_triggers__act(vlSelf);
    Vtb_Top_gen_wave___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_Top_gen_wave___024root___timing_resume(vlSelf);
        Vtb_Top_gen_wave___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_Top_gen_wave___024root___eval_phase__nba(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Top_gen_wave___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__nba(Vtb_Top_gen_wave___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__act(Vtb_Top_gen_wave___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Top_gen_wave___024root___eval(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_Top_gen_wave___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TB_Top_wave/tb_Top_gen_wave.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_Top_gen_wave___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TB_Top_wave/tb_Top_gen_wave.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_Top_gen_wave___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_Top_gen_wave___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Top_gen_wave___024root___eval_debug_assertions(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
