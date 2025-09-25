// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Start_condition__Syms.h"


void Vtb_Start_condition___024root__trace_chg_0_sub_0(Vtb_Start_condition___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Start_condition___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root__trace_chg_0\n"); );
    // Init
    Vtb_Start_condition___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Start_condition___024root*>(voidSelf);
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Start_condition___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Start_condition___024root__trace_chg_0_sub_0(Vtb_Start_condition___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_Start_condition__DOT__o_SDA));
        bufp->chgBit(oldp+1,(vlSelf->tb_Start_condition__DOT__o_done));
        bufp->chgBit(oldp+2,(vlSelf->tb_Start_condition__DOT__DUT__DOT__w_en));
        bufp->chgCData(oldp+3,(vlSelf->tb_Start_condition__DOT__DUT__DOT__phase),2);
        bufp->chgBit(oldp+4,(vlSelf->tb_Start_condition__DOT__DUT__DOT__Detect_edge_unit__DOT__w_p_signal));
    }
    bufp->chgBit(oldp+5,(vlSelf->tb_Start_condition__DOT__i_clk));
    bufp->chgBit(oldp+6,(vlSelf->tb_Start_condition__DOT__i_rst_n));
    bufp->chgBit(oldp+7,(vlSelf->tb_Start_condition__DOT__i_en));
    bufp->chgBit(oldp+8,(vlSelf->tb_Start_condition__DOT__i_SCL));
    bufp->chgCData(oldp+9,(vlSelf->tb_Start_condition__DOT__DUT__DOT__n_phase),2);
}

void Vtb_Start_condition___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Start_condition___024root__trace_cleanup\n"); );
    // Init
    Vtb_Start_condition___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Start_condition___024root*>(voidSelf);
    Vtb_Start_condition__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
