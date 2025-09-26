// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Top_gen_wave.h for the primary calling header

#ifndef VERILATED_VTB_TOP_GEN_WAVE___024ROOT_H_
#define VERILATED_VTB_TOP_GEN_WAVE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Top_gen_wave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Top_gen_wave___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_Top_gen_wave__DOT__i_clk;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n;
        CData/*3:0*/ tb_Top_gen_wave__DOT__i_btn;
        CData/*0:0*/ tb_Top_gen_wave__DOT__o_add_noise;
        CData/*2:0*/ tb_Top_gen_wave__DOT__o_sel_wave;
        CData/*2:0*/ tb_Top_gen_wave__DOT__o_sel_duty_cycle;
        CData/*0:0*/ tb_Top_gen_wave__DOT__o_lfsr_sin;
        CData/*6:0*/ tb_Top_gen_wave__DOT__o_hex_0;
        CData/*6:0*/ tb_Top_gen_wave__DOT__o_hex_1;
        CData/*6:0*/ tb_Top_gen_wave__DOT__o_hex_2;
        CData/*6:0*/ tb_Top_gen_wave__DOT__o_hex_3;
        CData/*6:0*/ tb_Top_gen_wave__DOT__o_hex_4;
        CData/*6:0*/ tb_Top_gen_wave__DOT__o_hex_5;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_gain;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_2;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_2;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_next_gain;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn;
        CData/*2:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
        CData/*2:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_next_gain;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en;
    };
    struct {
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_next_mode;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn;
        CData/*2:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode;
        CData/*2:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_next_mode;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1;
        CData/*3:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1;
        CData/*6:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_0__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_2__DOT__w_p_signal;
        CData/*0:0*/ tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_3__DOT__w_p_signal;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Top_gen_wave__DOT__i_clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_Top_gen_wave__DOT__i_sw;
        SData/*9:0*/ tb_Top_gen_wave__DOT__o_ledr;
        SData/*8:0*/ tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave;
        SData/*8:0*/ tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave;
        SData/*9:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase;
        SData/*9:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_next_step_phase;
        SData/*9:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase;
        SData/*9:0*/ tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_next_step_phase;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9177e31c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Top_gen_wave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Top_gen_wave___024root(Vtb_Top_gen_wave__Syms* symsp, const char* v__name);
    ~Vtb_Top_gen_wave___024root();
    VL_UNCOPYABLE(Vtb_Top_gen_wave___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
