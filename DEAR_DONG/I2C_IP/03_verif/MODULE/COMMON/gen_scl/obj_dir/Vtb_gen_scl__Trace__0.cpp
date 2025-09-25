// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_gen_scl__Syms.h"


void Vtb_gen_scl___024root__trace_chg_0_sub_0(Vtb_gen_scl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_gen_scl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root__trace_chg_0\n"); );
    // Init
    Vtb_gen_scl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gen_scl___024root*>(voidSelf);
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_gen_scl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_gen_scl___024root__trace_chg_0_sub_0(Vtb_gen_scl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_gen_scl__DOT__o_SCL));
        bufp->chgSData(oldp+1,(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count),16);
        bufp->chgSData(oldp+2,((0xffffU & ((IData)(1U) 
                                           + (IData)(vlSelf->tb_gen_scl__DOT__dut__DOT__r_count)))),16);
    }
    bufp->chgBit(oldp+3,(vlSelf->tb_gen_scl__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->tb_gen_scl__DOT__rst_n));
    bufp->chgBit(oldp+5,(vlSelf->tb_gen_scl__DOT__i_SCL_start));
    bufp->chgBit(oldp+6,(vlSelf->tb_gen_scl__DOT__i_SCL_en));
    bufp->chgSData(oldp+7,(vlSelf->tb_gen_scl__DOT__i_TWIBR),16);
    bufp->chgSData(oldp+8,(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_next),16);
    bufp->chgBit(oldp+9,(vlSelf->tb_gen_scl__DOT__dut__DOT__w_count_stick));
}

void Vtb_gen_scl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_scl___024root__trace_cleanup\n"); );
    // Init
    Vtb_gen_scl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gen_scl___024root*>(voidSelf);
    Vtb_gen_scl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
