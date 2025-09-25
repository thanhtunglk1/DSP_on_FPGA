// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gen_scl.h for the primary calling header

#ifndef VERILATED_VTB_GEN_SCL___024ROOT_H_
#define VERILATED_VTB_GEN_SCL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_gen_scl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gen_scl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gen_scl__DOT__clk;
    CData/*0:0*/ tb_gen_scl__DOT__rst_n;
    CData/*0:0*/ tb_gen_scl__DOT__i_SCL_start;
    CData/*0:0*/ tb_gen_scl__DOT__i_SCL_en;
    CData/*0:0*/ tb_gen_scl__DOT__o_SCL;
    CData/*0:0*/ tb_gen_scl__DOT____Vtogcov__clk;
    CData/*0:0*/ tb_gen_scl__DOT____Vtogcov__rst_n;
    CData/*0:0*/ tb_gen_scl__DOT____Vtogcov__i_SCL_start;
    CData/*0:0*/ tb_gen_scl__DOT____Vtogcov__i_SCL_en;
    CData/*0:0*/ tb_gen_scl__DOT____Vtogcov__o_SCL;
    CData/*0:0*/ tb_gen_scl__DOT__dut__DOT__w_count_stick;
    CData/*0:0*/ tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_stick;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gen_scl__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gen_scl__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_gen_scl__DOT__i_TWIBR;
    SData/*15:0*/ tb_gen_scl__DOT____Vtogcov__i_TWIBR;
    SData/*15:0*/ tb_gen_scl__DOT__dut__DOT__r_count;
    SData/*15:0*/ tb_gen_scl__DOT__dut__DOT__w_count_next;
    SData/*15:0*/ tb_gen_scl__DOT__dut__DOT____Vtogcov__r_count;
    SData/*15:0*/ tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_next;
    SData/*15:0*/ tb_gen_scl__DOT__dut__DOT____Vtogcov__w_count_add;
    SData/*15:0*/ tb_gen_scl__DOT__dut__DOT__add_algo_unit__DOT____Vtogcov__i_operate_b;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_gen_scl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_gen_scl___024root(Vtb_gen_scl__Syms* symsp, const char* v__name);
    ~Vtb_gen_scl___024root();
    VL_UNCOPYABLE(Vtb_gen_scl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
