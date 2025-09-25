verdiSetActWin -dock widgetDock_<Decl._Tree>
verdiWindowWorkMode -win $_Verdi_1 -formalVerification
verdiDockWidgetDisplay -dock windowDock_vcstConsole_2
srcSetPreference -vcstOpts {-demo -prompt vcf -fmode _default -new_verdi_comm}
verdiWindowResize -win $_Verdi_1 "50" "0" "1250" "800"
verdiWindowResize -win $_Verdi_1 "0" "24" "1250" "619"
verdiWindowResize -win $_Verdi_1 "0" "24" "1250" "619"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
verdiVcstOpenTclPrjFile -file \
           /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/run_fxp.tcl
schSetVCSTDelimiter -VHDLGenDelim "."
schUnifiedNetList
verdiSetPrefEnv -bSpecifyWindowTitleForDockContainer "off"
paSetPreference -brightenPowerColor on
paSetPreference -AnnotateSignal off -brightenPowerColor on
paSetPreference -AnnotateSignal off -highlightPowerObject off -brightenPowerColor \
           on
schSetVCSTDelimiter -hierDelim "."
srcSetXpropOption "tmerge"
wvSetPreference -overwrite off
wvSetPreference -getAllSignal off
simSetSimulator "-vcssv" -exec \
           "/u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/design/simv" \
           -args
debImport "-simflow" "-smart_load_kdb" "-dbdir" \
          "/u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/design/simv.daidir"
srcSetPreference -tabNum 16
schSetPreference -displayAbstractSrc on
debLoadUserDefinedFile \
           /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/verdi/constant.uddb
srcSetOptions -userAnnot on -win $_nTrace1 -field 2
opVerdiComponents -xmlstr \
           "<Command delimiter=\"/\" name=\"schSession\">
<HighlightObjs clear=\"true\"/>
</Command>
"
opVerdiComponents -xmlstr \
           "<Command delimiter=\"/\" name=\"schSession\">
<HighlightObjs>
<H_Nets>
<H_Net name=\"i2c_top/rst\" text=\"C:0\" color=\"2\"/>
</H_Nets>
</HighlightObjs>
</Command>
"
verdiRunVcstCmd check_fv

verdiSetActWin -dock widgetDock_VCF:GoalList
verdiSetActWin -win $_vcstConsole_2
debExit
