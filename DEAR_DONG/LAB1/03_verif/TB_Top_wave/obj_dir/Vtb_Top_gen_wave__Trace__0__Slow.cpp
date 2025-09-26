// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Top_gen_wave__Syms.h"


VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_init_sub__TOP__0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_Top_gen_wave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"SIZE_BTN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"SIZE_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"SIZE_LEDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"SIZE_LEDG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"SIZE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SIZE_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"NUM_MODE_WAVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"NUM_DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SIZE_GAIN_WAVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"i_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+15,0,"o_add_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"o_sel_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"o_sel_duty_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"o_gain_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"o_phase_step_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+20,0,"o_lfsr_sin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"o_phase_step_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+22,0,"o_gain_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"o_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,0,"o_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"o_hex_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+25,0,"o_hex_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"o_hex_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"o_hex_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+28,0,"o_hex_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+29,0,"o_hex_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"SIZE_BTN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"SIZE_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"SIZE_LEDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"SIZE_LEDG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"SIZE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"SIZE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SIZE_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"NUM_MODE_WAVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"NUM_DUTY_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SIZE_GAIN_WAVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"i_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+15,0,"o_add_noise",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"o_sel_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"o_sel_duty_cycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"o_gain_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"o_phase_step_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+20,0,"o_lfsr_sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"o_phase_step_noise",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+31,0,"o_gain_noise",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"o_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,0,"o_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+25,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"o_hex_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+28,0,"o_hex_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+29,0,"o_hex_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"SIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+116,0,"SQUARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+117,0,"TRIANGLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"SAWTOOTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+119,0,"ECG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"LFSR_NOISE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"SIN_NOISE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"w_gain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+103,0,"w_en_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"w_gain_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"w_wave_hex_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"w_wave_hex_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+123,0,"w_wave_hex_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+19,0,"w_phase_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+34,0,"w_wave_hex_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"w_wave_hex_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"w_wave_hex_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+104,0,"w_en_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"w_gain_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"w_noise_hex_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"w_noise_hex_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+124,0,"w_noise_hex_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"w_phase_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"w_noise_hex_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"w_noise_hex_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"w_noise_hex_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+42,0,"w_btn_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"w_btn_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_btn_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"w_btn_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"w_en_add_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"w_sel_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"w_sel_duty_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+106,0,"w_lfsr_sin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("BTN_DE_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("BTN_DE_unit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("BTN_DE_unit_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CTR_adjust_amp_noise_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"NUM_GAIN_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"NUM_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_btn_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"o_gain_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+124,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+50,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"w_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"w_next_gain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CTR_step_amp_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"NUM_GAIN_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"NUM_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+54,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"w_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_next_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CTR_adjust_amp_wave_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"NUM_GAIN_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"NUM_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_btn_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"o_gain_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+123,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+58,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"w_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"w_next_gain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CTR_step_amp_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"NUM_GAIN_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"NUM_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+62,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"w_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"w_next_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CTR_adjust_phase_noise_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"SIZE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SIZE_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"SIZE_PHASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_btn_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"o_phase_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+39,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+67,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"w_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+69,0,"w_step_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+70,0,"w_next_step_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+71,0,"w_add_step_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+72,0,"w_phase_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CTR_step_phase_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"SIZE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SIZE_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+74,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"NUM_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"w_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"w_next_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+12,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SEG_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"NUM_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"NUM_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"i_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+127,0,"SIGN_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+128,0,"SIGN_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"bin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"bin_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"seg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+81,0,"seg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+82,0,"seg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("HEX_1_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"bin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("HEX_2_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"bin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CTR_adjust_phase_wave_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"SIZE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SIZE_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"SIZE_PHASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_btn_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"o_phase_wave",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+34,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+84,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"w_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+86,0,"w_step_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+87,0,"w_next_step_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+88,0,"w_add_step_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+89,0,"w_phase_wave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CTR_step_phase_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"SIZE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SIZE_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+91,0,"w_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"NUM_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"w_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"w_next_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BTN_DE_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"o_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"w_p_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("SEG_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"NUM_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"NUM_SEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"i_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"o_hex_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_hex_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_hex_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+127,0,"SIGN_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+128,0,"SIGN_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+95,0,"bin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+96,0,"bin_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"seg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+98,0,"seg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+99,0,"seg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("HEX_1_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"bin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("HEX_2_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"bin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+99,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_init_top(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_init_top\n"); );
    // Body
    Vtb_Top_gen_wave___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Top_gen_wave___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Top_gen_wave___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_register(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_Top_gen_wave___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_Top_gen_wave___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_Top_gen_wave___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_Top_gen_wave___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_const_0_sub_0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_const_0\n"); );
    // Init
    Vtb_Top_gen_wave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Top_gen_wave___024root*>(voidSelf);
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Top_gen_wave___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_const_0_sub_0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+109,(4U),32);
    bufp->fullIData(oldp+110,(0xaU),32);
    bufp->fullIData(oldp+111,(0x18U),32);
    bufp->fullIData(oldp+112,(0x400U),32);
    bufp->fullIData(oldp+113,(7U),32);
    bufp->fullIData(oldp+114,(3U),32);
    bufp->fullCData(oldp+115,(0U),3);
    bufp->fullCData(oldp+116,(1U),3);
    bufp->fullCData(oldp+117,(2U),3);
    bufp->fullCData(oldp+118,(3U),3);
    bufp->fullCData(oldp+119,(4U),3);
    bufp->fullCData(oldp+120,(6U),3);
    bufp->fullCData(oldp+121,(7U),3);
    bufp->fullCData(oldp+122,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain),4);
    bufp->fullCData(oldp+123,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_2),7);
    bufp->fullCData(oldp+124,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_2),7);
    bufp->fullBit(oldp+125,(0U));
    bufp->fullIData(oldp+126,(9U),32);
    bufp->fullCData(oldp+127,(0x7fU),7);
    bufp->fullCData(oldp+128,(0x7dU),7);
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_full_0_sub_0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_full_0\n"); );
    // Init
    Vtb_Top_gen_wave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Top_gen_wave___024root*>(voidSelf);
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Top_gen_wave___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Top_gen_wave___024root__trace_full_0_sub_0(Vtb_Top_gen_wave___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_Top_gen_wave__DOT__i_btn),4);
    bufp->fullSData(oldp+2,(vlSelf->tb_Top_gen_wave__DOT__i_sw),10);
    bufp->fullCData(oldp+3,((7U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                   >> 4U))),3);
    bufp->fullCData(oldp+4,((7U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                   >> 1U))),3);
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                 >> 1U))));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                 >> 2U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_btn) 
                                 >> 3U))));
    bufp->fullBit(oldp+9,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_en));
    bufp->fullBit(oldp+10,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_en));
    bufp->fullBit(oldp+11,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_en));
    bufp->fullBit(oldp+12,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_en));
    bufp->fullBit(oldp+13,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_en));
    bufp->fullBit(oldp+14,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_en));
    bufp->fullBit(oldp+15,(vlSelf->tb_Top_gen_wave__DOT__o_add_noise));
    bufp->fullCData(oldp+16,(vlSelf->tb_Top_gen_wave__DOT__o_sel_wave),3);
    bufp->fullCData(oldp+17,(vlSelf->tb_Top_gen_wave__DOT__o_sel_duty_cycle),3);
    bufp->fullCData(oldp+18,((7U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave))),3);
    bufp->fullSData(oldp+19,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave),10);
    bufp->fullBit(oldp+20,(vlSelf->tb_Top_gen_wave__DOT__o_lfsr_sin));
    bufp->fullSData(oldp+21,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave),10);
    bufp->fullCData(oldp+22,((7U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise))),3);
    bufp->fullCData(oldp+23,((((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3) 
                               << 3U) | (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2) 
                                          << 2U) | 
                                         (((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1) 
                                           << 1U) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0))))),4);
    bufp->fullCData(oldp+24,(vlSelf->tb_Top_gen_wave__DOT__o_hex_0),7);
    bufp->fullCData(oldp+25,(vlSelf->tb_Top_gen_wave__DOT__o_hex_1),7);
    bufp->fullCData(oldp+26,(vlSelf->tb_Top_gen_wave__DOT__o_hex_2),7);
    bufp->fullCData(oldp+27,(vlSelf->tb_Top_gen_wave__DOT__o_hex_3),7);
    bufp->fullCData(oldp+28,(vlSelf->tb_Top_gen_wave__DOT__o_hex_4),7);
    bufp->fullCData(oldp+29,(vlSelf->tb_Top_gen_wave__DOT__o_hex_5),7);
    bufp->fullCData(oldp+30,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave),4);
    bufp->fullCData(oldp+31,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise),4);
    bufp->fullCData(oldp+32,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_0),7);
    bufp->fullCData(oldp+33,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_1),7);
    bufp->fullCData(oldp+34,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_3),7);
    bufp->fullCData(oldp+35,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_4),7);
    bufp->fullCData(oldp+36,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_wave_hex_5),7);
    bufp->fullCData(oldp+37,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_0),7);
    bufp->fullCData(oldp+38,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_1),7);
    bufp->fullCData(oldp+39,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_3),7);
    bufp->fullCData(oldp+40,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_4),7);
    bufp->fullCData(oldp+41,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_noise_hex_5),7);
    bufp->fullBit(oldp+42,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_0));
    bufp->fullBit(oldp+43,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1));
    bufp->fullBit(oldp+44,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_2));
    bufp->fullBit(oldp+45,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_3));
    bufp->fullBit(oldp+46,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+47,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_0__DOT__w_p_signal));
    bufp->fullBit(oldp+48,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_2__DOT__w_p_signal));
    bufp->fullBit(oldp+49,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__BTN_DE_unit_3__DOT__w_p_signal));
    bufp->fullBit(oldp+50,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn));
    bufp->fullCData(oldp+51,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step),4);
    bufp->fullCData(oldp+52,((0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_step) 
                                      + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_noise)))),4);
    bufp->fullBit(oldp+53,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+54,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
    bufp->fullBit(oldp+55,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode));
    bufp->fullBit(oldp+56,((1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__w_mode)))));
    bufp->fullBit(oldp+57,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+58,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn));
    bufp->fullCData(oldp+59,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step),4);
    bufp->fullCData(oldp+60,((0xfU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_step) 
                                      + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_gain_wave)))),4);
    bufp->fullBit(oldp+61,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+62,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_btn));
    bufp->fullBit(oldp+63,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode));
    bufp->fullBit(oldp+64,((1U & (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__w_mode)))));
    bufp->fullBit(oldp+65,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__CTR_step_amp_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullSData(oldp+66,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_noise_unit__o_phase_wave),9);
    bufp->fullBit(oldp+67,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_btn));
    bufp->fullCData(oldp+68,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step),7);
    bufp->fullSData(oldp+69,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase),10);
    bufp->fullSData(oldp+70,((0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase) 
                                        + ((0x180U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step) 
                                                              >> 6U)))) 
                                               << 7U)) 
                                           | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step))))),10);
    bufp->fullSData(oldp+71,(((0x180U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step) 
                                                        >> 6U)))) 
                                         << 7U)) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step))),10);
    bufp->fullSData(oldp+72,((0x1ffU & ((0x200U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase))
                                         ? (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase)
                                         : ((IData)(1U) 
                                            + (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__w_step_phase)))))),9);
    bufp->fullBit(oldp+73,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+74,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
    bufp->fullCData(oldp+75,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode),3);
    bufp->fullCData(oldp+76,((7U & ((IData)(1U) + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__w_mode)))),3);
    bufp->fullBit(oldp+77,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullCData(oldp+78,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1),4);
    bufp->fullCData(oldp+79,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2),4);
    bufp->fullCData(oldp+80,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0),7);
    bufp->fullCData(oldp+81,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1),7);
    bufp->fullCData(oldp+82,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_noise_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2),7);
    bufp->fullSData(oldp+83,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____Vcellout__CTR_adjust_phase_wave_unit__o_phase_wave),9);
    bufp->fullBit(oldp+84,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_btn));
    bufp->fullCData(oldp+85,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step),7);
    bufp->fullSData(oldp+86,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase),10);
    bufp->fullSData(oldp+87,((0x3ffU & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase) 
                                        + ((0x180U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step) 
                                                              >> 6U)))) 
                                               << 7U)) 
                                           | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step))))),10);
    bufp->fullSData(oldp+88,(((0x180U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step) 
                                                        >> 6U)))) 
                                         << 7U)) | (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step))),10);
    bufp->fullSData(oldp+89,((0x1ffU & ((0x200U & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase))
                                         ? (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase)
                                         : ((IData)(1U) 
                                            + (~ (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__w_step_phase)))))),9);
    bufp->fullBit(oldp+90,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullBit(oldp+91,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_btn));
    bufp->fullCData(oldp+92,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode),3);
    bufp->fullCData(oldp+93,((7U & ((IData)(1U) + (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__w_mode)))),3);
    bufp->fullBit(oldp+94,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__BTN_DE_unit__DOT__w_p_signal));
    bufp->fullCData(oldp+95,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_1),4);
    bufp->fullCData(oldp+96,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__bin_2),4);
    bufp->fullCData(oldp+97,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_0),7);
    bufp->fullCData(oldp+98,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_1),7);
    bufp->fullCData(oldp+99,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_phase_wave_unit__DOT__CTR_step_phase_unit__DOT__SEG_UNIT__DOT__seg_2),7);
    bufp->fullBit(oldp+100,(vlSelf->tb_Top_gen_wave__DOT__i_clk));
    bufp->fullSData(oldp+101,(vlSelf->tb_Top_gen_wave__DOT__o_ledr),10);
    bufp->fullBit(oldp+102,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__i_rst_n));
    bufp->fullBit(oldp+103,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave));
    bufp->fullBit(oldp+104,(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise));
    bufp->fullBit(oldp+105,((IData)(((0x100U == (0x180U 
                                                 & (IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw))) 
                                     & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_btn_1)))));
    bufp->fullBit(oldp+106,(((~ ((~ ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                     >> 4U)) & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4))) 
                             & ((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT____VdfgRegularize_ha407f25f_1_4) 
                                & ((IData)(vlSelf->tb_Top_gen_wave__DOT__i_sw) 
                                   >> 4U)))));
    bufp->fullBit(oldp+107,(((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_noise) 
                             & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_noise_unit__DOT__w_btn))));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__w_en_wave) 
                             & (IData)(vlSelf->tb_Top_gen_wave__DOT__DUT__DOT__CTR_adjust_amp_wave_unit__DOT__w_btn))));
}
