// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Top_gen_wave.h for the primary calling header

#include "Vtb_Top_gen_wave__pch.h"
#include "Vtb_Top_gen_wave___024root.h"

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_static(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_final(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__stl(Vtb_Top_gen_wave___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_Top_gen_wave___024root___eval_phase__stl(Vtb_Top_gen_wave___024root* vlSelf);

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_settle(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_Top_gen_wave___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TB_Top_wave/tb_Top_gen_wave.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_Top_gen_wave___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__stl(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___stl_sequent__TOP__0(Vtb_Top_gen_wave___024root* vlSelf);

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_stl(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Top_gen_wave___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*6:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h5a7f7c5f_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h862118a6_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h03d717b3_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vtb_Top_gen_wave__ConstPool__TABLE_h27e49da7_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vtb_Top_gen_wave__ConstPool__TABLE_h91655a8e_0;

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___stl_sequent__TOP__0(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4 
        = (IData)((0x60U == (0x60U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode 
        = (1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode 
        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode 
        = (1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode 
        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_next_gain 
        = (0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step) 
                   + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave)));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_next_gain 
        = (0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step) 
                   + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise)));
    vlSelf->tb_Top_gen_wave__DOT__o_ledr = ((0x300U 
                                             & (IData)(vlSelf->tb_Top_gen_wave__DOT__o_ledr)) 
                                            | (((IData)(vlSelf->tb_Top_gen_wave__DOT__o_sel_wave) 
                                                << 5U) 
                                               | (((IData)(vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_Top_gen_wave__DOT__o_add_noise)))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n 
        = (1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                 >> 9U));
    __Vtableidx1 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h5a7f7c5f_0
        [__Vtableidx1];
    __Vtableidx5 = vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step 
        = Vtb_Top_gen_wave__ConstPool__TABLE_h5a7f7c5f_0
        [__Vtableidx5];
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise 
        = (IData)((0x80U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave 
        = (IData)((0U == (0x180U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))));
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
    vlSelf->tb_Top_gen_wave__DOT__o_ledr = ((0x1ffU 
                                             & (IData)(vlSelf->tb_Top_gen_wave__DOT__o_ledr)) 
                                            | ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n) 
                                               << 9U));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_next_step_phase 
        = (0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase) 
                     + ((0x180U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step))));
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_next_step_phase 
        = (0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase) 
                     + ((0x180U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step))));
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
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_triggers__stl(Vtb_Top_gen_wave___024root* vlSelf);

VL_ATTR_COLD bool Vtb_Top_gen_wave___024root___eval_phase__stl(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_Top_gen_wave___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_Top_gen_wave___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__act(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb_Top_gen_wave.DUT.i_rst_n or posedge tb_Top_gen_wave.i_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_Top_gen_wave.i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__nba(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb_Top_gen_wave.DUT.i_rst_n or posedge tb_Top_gen_wave.i_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_Top_gen_wave.i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___ctor_var_reset(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_Top_gen_wave__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__i_btn = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__i_sw = VL_RAND_RESET_I(10);
    vlSelf->tb_Top_gen_wave__DOT__o_add_noise = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__o_sel_wave = VL_RAND_RESET_I(3);
    vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle = VL_RAND_RESET_I(3);
    vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__o_ledr = VL_RAND_RESET_I(10);
    vlSelf->tb_Top_gen_wave__DOT__o_hex_0 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__o_hex_1 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__o_hex_2 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__o_hex_3 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__o_hex_4 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__o_hex_5 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_2 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave = VL_RAND_RESET_I(9);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_2 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave = VL_RAND_RESET_I(9);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_next_gain = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase = VL_RAND_RESET_I(10);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_next_step_phase = VL_RAND_RESET_I(10);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode = VL_RAND_RESET_I(3);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode = VL_RAND_RESET_I(3);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1 = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2 = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_next_gain = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase = VL_RAND_RESET_I(10);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_next_step_phase = VL_RAND_RESET_I(10);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode = VL_RAND_RESET_I(3);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode = VL_RAND_RESET_I(3);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1 = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2 = VL_RAND_RESET_I(4);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2 = VL_RAND_RESET_I(7);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_0__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_2__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_3__DOT__w_p_signal = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
