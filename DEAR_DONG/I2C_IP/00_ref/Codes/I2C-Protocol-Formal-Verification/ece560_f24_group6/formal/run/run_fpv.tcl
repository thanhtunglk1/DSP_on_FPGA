set_fml_appmode FPV
set design i2c_top

read_file -top i2c_top -format sverilog -sva -vcs {-f ../RTL/filelist}

create_clock clk -period 100
create_reset rst -sense high

sim_run -stable
sim_save_reset




