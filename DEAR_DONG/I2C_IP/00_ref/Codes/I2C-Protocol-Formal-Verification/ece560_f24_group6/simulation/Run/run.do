vlib work
vdel -all

vlib work 

vlog i2c_master.sv
vlog i2c_slave.sv
vlog i2c_main.sv
vlog tb_top.sv

vsim -voptargs=+acc work.i2c_tb

add wave sim:/i2c_tb/*
add wave sim:/i2c_tb/dut/master_dut.en
add wave sim:/i2c_tb/dut/master_dut.scl
add wave sim:/i2c_tb/dut/master_dut.sdat
add wave sim:/i2c_tb/dut/master_dut.count
add wave sim:/i2c_tb/dut/master_dut.update
add wave sim:/i2c_tb/dut/master_dut.state
add wave sim:/i2c_tb/dut/master_dut.next_state
add wave sim:/i2c_tb/dut/slave_dut.send_ack_start
add wave sim:/i2c_tb/dut/slave_dut.send_ack_end
add wave sim:/i2c_tb/dut/slave_dut.sdan
add wave sim:/i2c_tb/dut/slave_dut.update
add wave sim:/i2c_tb/dut/slave_dut.countn
add wave sim:/i2c_tb/dut/slave_dut.state
add wave sim:/i2c_tb/dut/slave_dut.next_state

run -all

