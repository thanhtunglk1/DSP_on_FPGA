bind i2c_master i2c_master_assertions bind1 (
	.clk(clk),
	.rst(rst),
	.wr(wr),
	.addr(addr),
	.din(din),
	.update(update),
	.sdan(sdan),
	.send_ack_start(send_ack_start),
	.send_ack_end(send_ack_end),
	.en(en),
	.temprd(temprd),
	.done(done),
	.scl(scl),
	.sdat(sdat),
	.state(state),
	.next_state(next_state),
	.count(count)
);



bind i2c_slave i2c_slave_assertions bind2 (
	.clk(clk),
	.rst(rst),
	.en(en),
	.sdat(sdat),
	.scl(scl),
	.update(update),
	.sdan(sdan),
	.send_ack_start(send_ack_start),
	.send_ack_end(send_ack_end),
	.countn(countn),
	.addrn(addrn),
	.data_rn(data_rn),
	.datan(datan),
	.state(state),
	.next_state(next_state)
);


bind i2c_master i2c_master_assumptions bind3 (
	.clk(clk),
	.rst(rst),
	.wr(wr),
	.addr(addr),
	.din(din),
	.update(update),
	.sdan(sdan),
	.send_ack_start(send_ack_start),
	.send_ack_end(send_ack_end),
	.en(en),
	.temprd(temprd),
	.done(done),
	.scl(scl),
	.sdat(sdat),
	.state(state),
	.next_state(next_state),
	.count(count)
);


bind i2c_top i2c_top_assertions bind4 (
	.clk(clk),
	.rst(rst),
	.wr(wr),
	.din(din),
	.addr(addr),
	.datard(datard),
	.done(done),
	.update(update)
);


bind i2c_slave i2c_slave_assumptions bind5 (
	.clk(clk),
	.rst(rst),
	.en(en),
	.sdat(sdat),
	.scl(scl),
	.update(update),
	.sdan(sdan),
	.send_ack_start(send_ack_start),
	.send_ack_end(send_ack_end),
	.countn(countn),
	.addrn(addrn),
	.data_rn(data_rn),
	.datan(datan),
	.state(state),
	.next_state(next_state)
);

