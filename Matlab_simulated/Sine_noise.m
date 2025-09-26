%% T?o s�ng sine c� nhi?u v� ph�n t�ch ph? t?n s?
clear; clc; close all;

%% C�c tham s?
A_signal = 2;           % Bi�n ?? t�n hi?u ch�nh
f_signal = 8;           % T?n s? t�n hi?u ch�nh (Hz)
A_noise = 0.3;          % Bi�n ?? nhi?u
f_noise = 80;           % T?n s? nhi?u cao (Hz)
fs = 512;               % T?n s? l?y m?u (Hz)
T = 1;                  % Th?i gian t?ng (gi�y)
noise_white_level = 0.2; % M?c nhi?u tr?ng

%% T?o vector th?i gian
t = 0:1/fs:T-1/fs;
N = length(t);

%% T?o c�c t�n hi?u
% T�n hi?u sine g?c
signal_clean = A_signal * sin(2*pi*f_signal*t);

% Nhi?u t?n s? cao
noise_sine = A_noise * sin(2*pi*f_noise*t);

% Nhi?u tr?ng
noise_white = noise_white_level * randn(size(t));

% Nhi?u t?ng h?p
noise_total = noise_sine + noise_white;
%noise_total = noise_sine;

% T�n hi?u cu?i c�ng
signal_noisy = signal_clean + noise_total;

%% T�nh ph? t?n s?
% Tr?c t?n s? (ch? l?y n?a ??u do t�nh ??i x?ng)
f_axis = (0:N/2-1) * fs/N;

% FFT cho c�c t�n hi?u
fft_clean = fft(signal_clean);
fft_noise = fft(noise_total);
fft_noisy = fft(signal_noisy);

% ?? l?n ph? t?n s? (ch? l?y n?a ??u)
mag_clean = abs(fft_clean(1:N/2));
mag_noise = abs(fft_noise(1:N/2));
mag_noisy = abs(fft_noisy(1:N/2));

%% V? ?? th? - Figure 1: T�n hi?u sine g?c
figure('Position', [100, 600, 1200, 400]);

subplot(1,2,1);
plot(t, signal_clean, 'b', 'LineWidth', 2);
title('Sine Original Signal', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 1]); % Hi?n th? 1 gi�y ??u ?? th?y r�

subplot(1,2,2);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2);
title('Frequency Spectrum - Sine', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency', 'FontSize', 12);
ylabel('Level db', 'FontSize', 12);
grid on;
xlim([0 100]); % Hi?n th? ??n 100Hz

%% Figure 2: Nhi?u t?ng h?p
figure('Position', [100, 400, 1200, 400]);

subplot(1,2,1);
plot(t, noise_total, 'r', 'LineWidth', 1);
title('Noise (White noise and high frequentcy sine)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 0.2]); % Hi?n th? 0.2 gi�y ??u ?? th?y r� nhi?u t?n s? cao

subplot(1,2,2);
plot(f_axis, mag_noise, 'r', 'LineWidth', 1);
title('Frequency Spectrum - Noise', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Level db', 'FontSize', 12);
grid on;
xlim([0 100]);

%% Figure 3: T�n hi?u c� nhi?u
figure('Position', [100, 200, 1200, 400]);

subplot(1,2,1);
plot(t, signal_noisy, 'k', 'LineWidth', 1);
title('Sine and Noise', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 1]);

subplot(1,2,2);
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
title('Frequency Spectrum - Sine + Noise', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Level db', 'FontSize', 12);
grid on;
xlim([0 100]);

%% Figure 4: So s�nh t?ng quan
figure('Position', [100, 50, 1400, 600]);

% So s�nh trong mi?n th?i gian
subplot(2,2,1);
plot(t, signal_clean, 'b', 'LineWidth', 2); hold on;
plot(t, signal_noisy, 'k', 'LineWidth', 1);
title('Compare two time region', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
legend('Original signal', 'Signal + Noise', 'Location', 'best');
grid on;
xlim([0 1]);

% So s�nh ph? t?n s? - Scale tuy?n t�nh
subplot(2,2,2);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
plot(f_axis, mag_noise, 'r--', 'LineWidth', 1);
title('Compare Frequency Spectrum', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Level db', 'FontSize', 12);
legend('Original', 'Signal + Noise', 'Noise', 'Location', 'best');
grid on;
xlim([0 100]);

% Chi ti?t v�ng t?n s? th?p
subplot(2,2,3);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
title('Low frequency region', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Freqency (Hz)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
legend('Original', 'Signal + Noise', 'Location', 'best');
grid on;
xlim([0 20]);

% Ph? t?n s? d?ng log scale
subplot(2,2,4);
semilogy(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
semilogy(f_axis, mag_noisy, 'k', 'LineWidth', 1);
semilogy(f_axis, mag_noise, 'r--', 'LineWidth', 1);
title('Frequency Spectrum (thang log)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Freqency (Hz)', 'FontSize', 12);
ylabel('Amplitude (log)', 'FontSize', 12);
legend('Original', 'Signal + Noise', 'Noise', 'Location', 'best');
grid on;
xlim([0 100]);

%% Hi?n th? th�ng tin
fprintf('=== SIGNAL INFORMATION ===\n');
fprintf('Freqency of original signal: %.1f Hz\n', f_signal);
fprintf('Freqency of Noise: %.1f Hz\n', f_noise);
fprintf('Sampling Rate: %.1f Hz\n', fs);
fprintf('Total time: %.1f s\n', T);
fprintf('Total Samp: %d\n', N);
fprintf('Resolution of Frequency: %.2f Hz\n', fs/N);

% T�nh SNR (Signal-to-Noise Ratio)
power_signal = mean(signal_clean.^2);
power_noise = mean(noise_total.^2);
SNR_linear = power_signal / power_noise;
SNR_dB = 10 * log10(SNR_linear);
fprintf('SNR: %.2f dB (%.2f time)\n', SNR_dB, SNR_linear);

%% L?u d? li?u (t�y ch?n)
% save('sine_with_noise.mat', 't', 'signal_clean', 'signal_noisy', 'noise_total', 'fs');
% fprintf('?� l?u d? li?u v�o file sine_with_noise.mat\n');