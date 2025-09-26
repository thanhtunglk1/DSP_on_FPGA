// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Top_gen_wave__Syms.h"


void Vtb_Top_gen_wave___024root__trace_chg_0_sub_0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Top_gen_wave___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_chg_0\n"); );
    // Init
    Vtb_Top_gen_wave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Top_gen_wave___024root*>(voidSelf);
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Top_gen_wave___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Top_gen_wave___024root__trace_chg_0_sub_0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_Top_gen_wave__DOT__i_btn),4);
        bufp->chgSData(oldp+1,(vlSelf->tb_Top_gen_wave__DOT__i_sw),10);
        bufp->chgCData(oldp+2,((7U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                      >> 4U))),3);
        bufp->chgCData(oldp+3,((7U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                      >> 1U))),3);
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                    >> 1U))));
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                    >> 2U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                    >> 3U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+8,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en));
        bufp->chgBit(oldp+9,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en));
        bufp->chgBit(oldp+10,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en));
        bufp->chgBit(oldp+11,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en));
        bufp->chgBit(oldp+12,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en));
        bufp->chgBit(oldp+13,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+14,(vlSelf->tb_Top_gen_wave__DOT__o_add_noise));
        bufp->chgCData(oldp+15,(vlSelf->tb_Top_gen_wave__DOT__o_sel_wave),3);
        bufp->chgCData(oldp+16,(vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle),3);
        bufp->chgCData(oldp+17,((7U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave))),3);
        bufp->chgSData(oldp+18,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave),10);
        bufp->chgBit(oldp+19,(vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin));
        bufp->chgSData(oldp+20,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave),10);
        bufp->chgCData(oldp+21,((7U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise))),3);
        bufp->chgCData(oldp+22,((((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3) 
                                  << 3U) | (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2) 
                                             << 2U) 
                                            | (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1) 
                                                << 1U) 
                                               | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0))))),4);
        bufp->chgCData(oldp+23,(vlSelf->tb_Top_gen_wave__DOT__o_hex_0),7);
        bufp->chgCData(oldp+24,(vlSelf->tb_Top_gen_wave__DOT__o_hex_1),7);
        bufp->chgCData(oldp+25,(vlSelf->tb_Top_gen_wave__DOT__o_hex_2),7);
        bufp->chgCData(oldp+26,(vlSelf->tb_Top_gen_wave__DOT__o_hex_3),7);
        bufp->chgCData(oldp+27,(vlSelf->tb_Top_gen_wave__DOT__o_hex_4),7);
        bufp->chgCData(oldp+28,(vlSelf->tb_Top_gen_wave__DOT__o_hex_5),7);
        bufp->chgCData(oldp+29,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave),4);
        bufp->chgCData(oldp+30,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise),4);
        bufp->chgCData(oldp+31,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0),7);
        bufp->chgCData(oldp+32,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1),7);
        bufp->chgCData(oldp+33,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3),7);
        bufp->chgCData(oldp+34,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4),7);
        bufp->chgCData(oldp+35,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5),7);
        bufp->chgCData(oldp+36,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0),7);
        bufp->chgCData(oldp+37,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1),7);
        bufp->chgCData(oldp+38,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3),7);
        bufp->chgCData(oldp+39,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4),7);
        bufp->chgCData(oldp+40,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5),7);
        bufp->chgBit(oldp+41,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0));
        bufp->chgBit(oldp+42,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1));
        bufp->chgBit(oldp+43,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2));
        bufp->chgBit(oldp+44,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3));
        bufp->chgBit(oldp+45,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+46,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_0__DOT__w_p_signal));
        bufp->chgBit(oldp+47,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_2__DOT__w_p_signal));
        bufp->chgBit(oldp+48,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_3__DOT__w_p_signal));
        bufp->chgBit(oldp+49,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn));
        bufp->chgCData(oldp+50,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step),4);
        bufp->chgCData(oldp+51,((0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step) 
                                         + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise)))),4);
        bufp->chgBit(oldp+52,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+53,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
        bufp->chgBit(oldp+54,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode));
        bufp->chgBit(oldp+55,((1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode)))));
        bufp->chgBit(oldp+56,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+57,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn));
        bufp->chgCData(oldp+58,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step),4);
        bufp->chgCData(oldp+59,((0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step) 
                                         + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave)))),4);
        bufp->chgBit(oldp+60,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+61,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
        bufp->chgBit(oldp+62,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode));
        bufp->chgBit(oldp+63,((1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode)))));
        bufp->chgBit(oldp+64,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgSData(oldp+65,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave),9);
        bufp->chgBit(oldp+66,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn));
        bufp->chgCData(oldp+67,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step),7);
        bufp->chgSData(oldp+68,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase),10);
        bufp->chgSData(oldp+69,((0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase) 
                                           + ((0x180U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step) 
                                                                 >> 6U)))) 
                                                  << 7U)) 
                                              | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step))))),10);
        bufp->chgSData(oldp+70,(((0x180U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step) 
                                                           >> 6U)))) 
                                            << 7U)) 
                                 | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step))),10);
        bufp->chgSData(oldp+71,((0x1ffU & ((0x200U 
                                            & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase))
                                            ? (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase)
                                            : ((IData)(1U) 
                                               + (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase)))))),9);
        bufp->chgBit(oldp+72,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+73,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
        bufp->chgCData(oldp+74,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode),3);
        bufp->chgCData(oldp+75,((7U & ((IData)(1U) 
                                       + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode)))),3);
        bufp->chgBit(oldp+76,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgCData(oldp+77,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1),4);
        bufp->chgCData(oldp+78,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2),4);
        bufp->chgCData(oldp+79,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0),7);
        bufp->chgCData(oldp+80,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1),7);
        bufp->chgCData(oldp+81,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2),7);
        bufp->chgSData(oldp+82,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave),9);
        bufp->chgBit(oldp+83,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn));
        bufp->chgCData(oldp+84,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step),7);
        bufp->chgSData(oldp+85,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase),10);
        bufp->chgSData(oldp+86,((0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase) 
                                           + ((0x180U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step) 
                                                                 >> 6U)))) 
                                                  << 7U)) 
                                              | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step))))),10);
        bufp->chgSData(oldp+87,(((0x180U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step) 
                                                           >> 6U)))) 
                                            << 7U)) 
                                 | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step))),10);
        bufp->chgSData(oldp+88,((0x1ffU & ((0x200U 
                                            & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase))
                                            ? (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase)
                                            : ((IData)(1U) 
                                               + (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase)))))),9);
        bufp->chgBit(oldp+89,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgBit(oldp+90,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
        bufp->chgCData(oldp+91,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode),3);
        bufp->chgCData(oldp+92,((7U & ((IData)(1U) 
                                       + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode)))),3);
        bufp->chgBit(oldp+93,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
        bufp->chgCData(oldp+94,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1),4);
        bufp->chgCData(oldp+95,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2),4);
        bufp->chgCData(oldp+96,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0),7);
        bufp->chgCData(oldp+97,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1),7);
        bufp->chgCData(oldp+98,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2),7);
    }
    bufp->chgBit(oldp+99,(vlSelf->tb_Top_gen_wave__DOT__i_clk));
    bufp->chgSData(oldp+100,(vlSelf->tb_Top_gen_wave__DOT__o_ledr),10);
    bufp->chgBit(oldp+101,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n));
    bufp->chgBit(oldp+102,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave));
    bufp->chgBit(oldp+103,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise));
    bufp->chgBit(oldp+104,((IData)(((0x100U == (0x180U 
                                                & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))) 
                                    & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1)))));
    bufp->chgBit(oldp+105,(((~ ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                    >> 4U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4))) 
                            & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4) 
                               & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                  >> 4U)))));
    bufp->chgBit(oldp+106,(((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
                            & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn))));
    bufp->chgBit(oldp+107,(((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
                            & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn))));
}

void Vtb_Top_gen_wave___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_cleanup\n"); );
    // Init
    Vtb_Top_gen_wave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Top_gen_wave___024root*>(voidSelf);
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
