// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Top_gen_wave.h for the primary calling header

#include "Vtb_Top_gen_wave__pch.h"
#include "Vtb_Top_gen_wave__Syms.h"
#include "Vtb_Top_gen_wave___024root.h"

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_initial__TOP(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x67656e5fU;
    __Vtemp_1[3U] = 0x546f705fU;
    __Vtemp_1[4U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Top_gen_wave___024root___dump_triggers__stl(Vtb_Top_gen_wave___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Top_gen_wave___024root___eval_triggers__stl(Vtb_Top_gen_wave___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Top_gen_wave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Top_gen_wave___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Top_gen_wave___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
