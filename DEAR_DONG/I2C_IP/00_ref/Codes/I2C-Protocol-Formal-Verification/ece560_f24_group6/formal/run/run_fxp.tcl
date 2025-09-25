# Set formal application mode
set_fml_appmode FXP 

# Specify the design top module
set design i2c_top 

# Read the design files using a properly formatted filelist
read_file -top $design -format sverilog -sva -vcs {-f ../RTL/filelist}

# Create clock signal with a period of 100ns
create_clock clk -period 100

# Define reset signal as active low
create_reset rst -sense high

# Ensure reset simulation runs to a stable state
sim_run -stable

# Save the reset state for formal analysis
sim_save_reset

fxp_generate

