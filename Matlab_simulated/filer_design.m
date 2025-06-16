h = filt1.tf.num;
cof = round(h * 2^15);
cofhex = arrayfun(@(x) upper(dec2hex(mod(x, 2^16), 4)), cof, 'UniformOutput', false);
disp(char(cofhex));
