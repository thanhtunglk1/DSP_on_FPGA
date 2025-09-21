transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -sv -work work +incdir+E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/00_src {E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/00_src/fir_top.sv}
vlog -sv -work work +incdir+E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/00_src {E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/00_src/fir_sym_trans.sv}

