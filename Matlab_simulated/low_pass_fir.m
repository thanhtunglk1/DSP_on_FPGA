Fs = 8000;         % T?n s? l?y m?u
Fc = 1000;         % T?n s? c?t
N = 31;            % S? h? s? (tap), n�n l� s? l?
wn = Fc / (Fs/2);  % Chu?n h�a t?n s? c?t (t? 0 ??n 1)

% Thi?t k? b? l?c FIR th�ng th?p v?i c?a s? Hamming
h = fir1(N-1, wn, 'low', hamming(N));

% V? ?�p ?ng t?n s?
fvtool(h, 1);     % C�ng c? ph�n t�ch b? l?c

% T?o t�n hi?u v� d?: g?m 300 Hz (tr?m) + 1500 Hz (cao)
t = 0:1/Fs:1;
x = sin(2*pi*300*t) + 0.5*sin(2*pi*1500*t);

% L?c t�n hi?u
y = filter(h, 1, x);

% V? k?t qu?
figure;
plot(t, x); hold on;
plot(t, y, 'r');
legend('T�n hi?u g?c', 'Sau l?c (Low-pass)');
xlabel('Th?i gian (s)');
ylabel('Bi�n ??');
title('So s�nh tr??c v� sau l?c FIR');
grid on;

%filename1 = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/01_tb/wave_noise.txt';  % Thay ??i t�n file c?a b?n
%filename2 = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/01_tb/wave_result.txt';  % Thay ??i t�n file c?a b?n
