#!/bin/csh -f
setenv VCS_HOME /pkgs/synopsys/current/vc_static/vcs-mx
setenv VC_STATIC_HOME /pkgs/synopsys/current/vc_static
setenv SYNOPSYS_SIM_SETUP /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/design/synopsys_sim.setup

$VCS_HOME/bin/vcs /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/design/undef_vcs.v -file /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/.internal/design/vcsCmd -Xvcstatic_extns=0x100  +warn=noSM_CCE  -error=IRRIPS  -kdb=common_elab  -Xufe=parallel:incrdump  -kdb=incopt  +warn=noKDB-ELAB-E  +warn=noELW_UNBOUND  -Xverdi_elab_opts=-saveLevel  -verdi_opts "-logdir /u/nivedita/Fourth_term/ece560_f24_group6/formal/run/vcst_rtdb/verdi/elabcomLog " -Xvd_opts=-silent,-ssy,-ssv,-ssz,+disable_message+C00373, -full64
