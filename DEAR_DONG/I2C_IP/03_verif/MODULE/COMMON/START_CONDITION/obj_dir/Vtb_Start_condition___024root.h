// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Start_condition.h for the primary calling header

#ifndef VERILATED_VTB_START_CONDITION___024ROOT_H_
#define VERILATED_VTB_START_CONDITION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Start_condition__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Start_condition___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_Start_condition__DOT__i_clk;
    CData/*0:0*/ tb_Start_condition__DOT__i_rst_n;
    CData/*0:0*/ tb_Start_condition__DOT__i_en;
    CData/*0:0*/ tb_Start_condition__DOT__i_SCL;
    CData/*0:0*/ tb_Start_condition__DOT__o_SDA;
    CData/*0:0*/ tb_Start_condition__DOT__o_done;
    CData/*0:0*/ tb_Start_condition__DOT__DUT__DOT__w_en;
    CData/*1:0*/ tb_Start_condition__DOT__DUT__DOT__phase;
    CData/*1:0*/ tb_Start_condition__DOT__DUT__DOT__n_phase;
    CData/*0:0*/ tb_Start_condition__DOT__DUT__DOT__Detect_edge_unit__DOT__w_p_signal;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Start_condition__DOT__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf1e3ff26__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Start_condition__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Start_condition___024root(Vtb_Start_condition__Syms* symsp, const char* v__name);
    ~Vtb_Start_condition___024root();
    VL_UNCOPYABLE(Vtb_Start_condition___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
