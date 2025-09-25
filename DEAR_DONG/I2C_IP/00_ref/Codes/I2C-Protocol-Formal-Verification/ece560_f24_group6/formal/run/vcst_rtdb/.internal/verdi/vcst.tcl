## VerdiPlay
source ./verdi_vcst.tcl
verdiVcstSetSviPid -pid 19234
verdiVcstResizeTopWin
verdiVcstGetVerdiFont
verdiDockWidgetSetCurTab -dock windowDock_vcstConsole_2
::vcst::creatInstAction
::vcst::createAnalyzerAction
::vcst::creatResetLayoutAction
::vcst::creatAssertAnalyzerAction
set ::vcst::EnableUDWin 0
qwConfig -type nWave -cmds [list {qwAddToolBarGroup -group "UDWinGroup"} {qwAddToolBarGroup -group "AssertAnalyzer"}]
srcSetOptions -lockActView on
::vcst::createAddTraceToWaveAction
source /pkgs/synopsys/current/vc_static/auxx/monet/tcl/menu.tcl

verdiWindowPrependTitle -win $_nTrace1 -preTitle {}
set ::vcst::_compositeTrace {1}
verdiVcstSyncMsgColor -errorColor "default_red" -warningColor "default_none" -infoColor "default_none"
verdiVcstOnPropSelectionChanged -strNum 0 -propList {}
verdiDockWidgetSetCurTab -dock widgetDock_VCF:GoalList
verdiGetVcstCmdResult -xmlstr {<Command name="source" received="1"></Command>}

verdiVcstOnPropSelectionChanged -strNum 0 -propList {}
verdiVcstSetAppmode -mode FXP -fromVcst
verdiVcstCheckFv -active -taskName FXP
set ::vcst::_fml_max_proof_depth {-1};set ::vcst::_fml_max_time {12H};catch {verdiVcstOnFmlVarChanged -key {fml_effort} -value {default}}
verdiDockWidgetSetCurTab -dock widgetDock_VCF:TaskList
verdiVcstSetAppmode -mode FXP -fromVcst
verdiVcstChangeGoalListTabName -tabName VCF:GoalList
verdiAboutDlg -banner {
VC Static

Version V-2023.12-SP2-3 for linux64 - Oct 12, 2024

Copyright (c) 2010 - 2024 Synopsys, Inc.
}
verdiSetStatusMsg -win Verdi_1 -color red { Design import... cross probing not ready }
set ::vcst::_top "i2c_top"
set ::vcst::_elab ""
set ::vcst::_elabOpts {}
set ::vcst::_rtdbDir {/u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb}
set ::vcst::_hiddenDir {.internal}
set ::vcst::_masterMode true
set ::vcst::_workLib "work"
set ::vcst::_upfOpts " -upf "
set ::vcst::_enableKdb "true"
set ::vcst::_simBinPath "simv"
set ::vcst::_goldenUpfConfig {}
set ::vcst::_nldmNschema {false}
set ::vcst::_kdbAlias {false}
set ::vcst::_covDut {}
set ::vcst::_splitbus {false}
set ::vcst::_enableVerdiLog {1}
set ::vcst::_fml_max_proof_depth {-1}
set ::vcst::_smartLoad {true}
set ::vcst::_compositeTrace {1}
set ::vcst::_strategyFilePath {}
set ::vcst::_enableVnrWriteKdb {false}
set ::vcst::_bIsFormalFlow {true}
set ::vcst::_bGlobalFsdbPresent {false}
set ::vcst::_sRunModes {}
set ::vcst::_enableVnrWriteKdbResolve {true}
set ::vcst::_disableSymbolLibraryImportMessage {false}
set ::vcst::_enableKdbRemoval {false}
set ::vcst::_diucFlow {false}
set ::vcst::_libArgs ""
set ::vcst::_seqXmlFile ""
schSetVCSTDelimiter -VHDLGenDelim "."
schUnifiedNetList -skipKdb
schSetPreference -turboLibs {} -turboLibPaths {}
verdiSetPrefEnv -bSpecifyWindowTitleForDockContainer off
paSetPreference -brightenPowerColor on
schSetPreference -showPassThroughNet on
paSetPreference -AnnotateSignal off
paSetPreference -highlightPowerObject off
srcAssertSetOpt -addSigToWave 0 -addSigWithExpGrp 1 -maskWave 0 -ShowCycleInfo 1
srcBlockFilelocateDlg on
verdiRunVcst -on
schSetVCSTDelimiter -hierDelim .
set ::vcst::_vcstAppHierDelim "."
srcSetXpropOption "tmerge"
set ::vcst::_powerDbDir ""
set ::vcst::_bRestore ""
verdiDockWidgetFix -dock widgetDock_VCF:GoalList
::vcst::loadMainWin "0"
verdiDockWidgetUnfix -dock widgetDock_VCF:GoalList

srcBlockFilelocateDlg off

setStyleFvProgress -css {font-family:DejaVu Sans monospace;font-size:11px}
setStyleFvGoalProgress -css {font-family:DejaVu Sans monospace;font-size:11px}
verdiSetFont -font "DejaVu Sans" -size "11"
verdiSetPrefEnv -monoFontSize "11"
verdiVcstEnableAppMode -enable FRV

verdiRunVcstCmd "___fvWaitAnnotation
" -no_wait
verdiRunVcstCmd "___fvSetReuseWave
" -no_wait
verdiSetStatusMsg -win Verdi_1 -color black { Design import ready }
verdiGetVcstCmdResult -xmlstr {<Command name="___fvWaitAnnotation
" received="1"></Command>}

verdiGetVcstCmdResult -xmlstr {<Command name="___fvSetReuseWave
" received="1"></Command>}

srcSetPreference -tabNum 16
verdiSetPrefEnv -bDockNewWindowInContainerWhenFindSameType "off"
set ::vcst::_bRestore ""
verdiLayoutFreeze -off
verdiToolBar -rm toolbarFusaExclMenu
verdiToolBar -rm toolbarHB_TOGGLE_PANEL toolbarHB_EMULATION_PANEL toolbarHB_PRODTYPE_PANEL UVM_AWARE_DEBUG AMS_CONFIG_TOOLBAR NOVAS_TBBR_INTERACTIVEVIEW_PANEL NOVAS_TBBR_DEBUG_REWIND_COMMAND NOVAS_TBBR_DEBUG_REWIND_UNDO_REDO_COMMAND NOVAS_TBBR_DEBUG_REVERSE_COMMAND NOVAS_TBBR_DEBUG_VSIM_COMMAND NOVAS_EMULATION_DEBUG_COMMAND CVG_CER_PANEL NOVAS_TBBR_DEBUG_COMMAND
verdiRunVcstCmd "action aaVerdiRestoreClipboard -trigger
" -no_wait
verdiGetVcstCmdResult -xmlstr {<Command name="action" received="1"></Command>}

verdiGetVcstCmdResult -xmlstr {<Command name="action" status="1"></Command>}

syncSignoffCovParamFromRcFile
verdiGetVcstCmdResult -xmlstr {<Command name="___fvSyncSignoffCovParam" received="1"></Command>}

verdiVcstDesignLoaded
verdiGetVcstCmdResult -xmlstr {<Command name="sim_run" status="1" />}
verdiGetVcstCmdResult -xmlstr {<Command name="sim_save_reset" status="1" />}
report_fv_complexity -silent -sim_save_reset
verdiLayoutFreeze -off
::vcst::showDebugViews -1 false false setupSource
verdiWindowMoveDockTab -win Verdi_1 widgetDock_VCF:Shell widgetDock_VCF:GoalList widgetDock_<Message>
verdiDockWidgetSetCurTab -dock widgetDock_VCF:GoalList

verdiVcstChangeGoalListTabName -tabName VCF:GoalList
verdiVcstChangeGoalListTabName -tabName VCF:GoalList(FXP)
verdiSetRCValue -section appSetting -key glbfilter -value {111}
schSetPreference -displayAbstractSrc on 
srcSetBlackbox   -delim {.}
srcSetGlassbox  -delim {.}
verdiGetRCValue -section appSetting -key reuseWave 
verdiVcstChangeGoalListTabName -tabName VCF:GoalList
verdiVcstChangeGoalListTabName -tabName VCF:GoalList(FXP)
verdiSetRCValue -section appSetting -key glbfilter -value {111}
verdiSetRCValue -section appSetting -key conSize -value {PROPERTY_CLASS,516:PROPERTY_CLOCK,100:PROPERTY_EXPRESSION,100:PROPERTY_ID,100:PROPERTY_INSTANCE,100:PROPERTY_LANGUAGE,100:PROPERTY_LOCATION,100:PROPERTY_NAME,100:PROPERTY_SCOPE,100:PROPERTY_SIGNALS,100:PROPERTY_SVA_TYPE,100:PROPERTY_TYPE,100:PROPERTY_USAGE,100:PROPERTY_VACUITY,100:PROPERTY_WITNESS,100:};
verdiVcstChangeGoalListTabName -tabName VCF:GoalList
verdiVcstChangeGoalListTabName -tabName VCF:GoalList(FXP)
verdiSetRCValue -section appSetting -key glbfilter -value {111}
verdiVcstConstantReport -xmlFile /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/verdi/constant.xml 
verdiVcstCheckFv -taskName FXP
vcstRunCovCmd -async gui_vcst_set_parameters -is_running true
verdiVcstChangeGoalListTabName -tabName VCF:GoalList
verdiVcstChangeGoalListTabName -tabName VCF:GoalList(FXP)
verdiSetRCValue -section appSetting -key glbfilter -value {111}
verdiGetVcstCmdResult -xmlstr {<Command name="check_fv" status="1" />}
receiveFvProgress /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/verdi/gridUsage.xml0
verdiSetRCValue -section appSetting -key fxpSize -value {PROPERTY_ELAPSED_TIME,153:PROPERTY_ENGINE,65:PROPERTY_LOCATION,100:PROPERTY_NAME,200:PROPERTY_ROOTCAUSE_SIGNAL,144:PROPERTY_ROOTCAUSE_TYPE,140:PROPERTY_STATUS,75:PROPERTY_TRACE_DEPTH,65:PROPERTY_VACUITY,75:};
