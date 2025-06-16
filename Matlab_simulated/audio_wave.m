%% T?o s�ng sine c� nhi?u v� ph�n t�ch ph? t?n s?
clear; clc; close all;

%% C�c tham s? - D?i t?n �m thanh
A_signal = 1;           % Amplitude t�n hi?u ch�nh
f_signal = 80;         % Frequency t�n hi?u ch�nh - N?t La chu?n (Hz)
A_noise = 0.2;          % Amplitude nhi?u
f_noise_high = [5000, 8000, 12000, 15000]; % C�c frequency nhi?u cao (Hz)
A_noise_high = [0.15, 0.1, 0.08, 0.05];    % Amplitude t??ng ?ng
fs = 44100;             % Sampling frequency chu?n �m thanh (Hz)
T = 1;                  % Th?i gian t?ng (gi�y)
noise_white_level = 0.1; % M?c nhi?u tr?ng

%% T?o vector th?i gian
t = 0:1/fs:T-1/fs;
N = length(t);

%% T?o c�c t�n hi?u
% T�n hi?u sine g?c - frequency �m thanh
signal_clean = A_signal * sin(2*pi*f_signal*t);

% Nhi?u frequency nhi?u cao
noise_sine = zeros(size(t));
for i = 1:length(f_noise_high)
    noise_sine = noise_sine + A_noise_high(i) * sin(2*pi*f_noise_high(i)*t);
end

% Nhi?u tr?ng (gi?i h?n bandwidth �m thanh)
noise_white = noise_white_level * randn(size(t));
% L?c nhi?u tr?ng ?? gi?i h?n trong d?i �m thanh (20Hz - 20kHz)
[b, a] = butter(6, [20 20000]/(fs/2), 'bandpass');
noise_white = filter(b, a, noise_white);

% Nhi?u t?ng h?p
noise_total = noise_sine + noise_white;

% T�n hi?u cu?i c�ng
signal_noisy = signal_clean + noise_total;

%% T�nh frequency spectrum
% Tr?c frequency (ch? l?y n?a ??u do t�nh ??i x?ng)
f_axis = (0:N/2-1) * fs/N;

% FFT cho c�c t�n hi?u
fft_clean = fft(signal_clean);
fft_noise = fft(noise_total);
fft_noisy = fft(signal_noisy);

% Magnitude frequency spectrum (ch? l?y n?a ??u)
mag_clean = abs(fft_clean(1:N/2));
mag_noise = abs(fft_noise(1:N/2));
mag_noisy = abs(fft_noisy(1:N/2));

%% V? ?? th? - Figure 1: T�n hi?u sine g?c
figure('Position', [100, 600, 1200, 400]);

subplot(1,2,1);
plot(t, signal_clean, 'b', 'LineWidth', 2);
title('T�n hi?u Audio g?c (440 Hz)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 0.02]); % Hi?n th? 20ms ?? th?y r� s�ng �m thanh

subplot(1,2,2);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2);
title('Frequency Spectrum - T�n hi?u Audio', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
grid on;
xlim([0 2000]); % Hi?n th? ??n 2kHz ?? th?y r� peak

%% Figure 2: Nhi?u t?ng h?p
figure('Position', [100, 400, 1200, 400]);

subplot(1,2,1);
plot(t, noise_total, 'r', 'LineWidth', 1);
title('Nhi?u �m thanh (Frequency cao + Nhi?u tr?ng)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 0.01]); % Hi?n th? 10ms ?? th?y r� nhi?u frequency cao

subplot(1,2,2);
plot(f_axis, mag_noise, 'r', 'LineWidth', 1);
title('Frequency Spectrum - Nhi?u �m thanh', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
grid on;
xlim([0 20000]); % Hi?n th? to�n b? d?i �m thanh

%% Figure 3: T�n hi?u c� nhi?u
figure('Position', [100, 200, 1200, 400]);

subplot(1,2,1);
plot(t, signal_noisy, 'k', 'LineWidth', 1);
title('T�n hi?u Audio + Nhi?u', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 0.02]); % Hi?n th? 20ms

subplot(1,2,2);
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
title('Frequency Spectrum - Audio + Nhi?u', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
grid on;
xlim([0 20000]); % Hi?n th? to�n b? d?i �m thanh

%% Figure 4: So s�nh t?ng quan
figure('Position', [100, 50, 1400, 600]);

% So s�nh trong time domain
subplot(2,2,1);
plot(t, signal_clean, 'b', 'LineWidth', 2); hold on;
plot(t, signal_noisy, 'k', 'LineWidth', 1);
title('So s�nh Time Domain', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
legend('T�n hi?u g?c (440Hz)', 'T�n hi?u + Nhi?u', 'Location', 'best');
grid on;
xlim([0 0.02]); % Hi?n th? 20ms

% So s�nh frequency spectrum - To�n d?i �m thanh
subplot(2,2,2);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
plot(f_axis, mag_noise, 'r--', 'LineWidth', 1);
title('So s�nh Frequency Spectrum (To�n d?i)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
legend('T�n hi?u g?c', 'T�n hi?u + Nhi?u', 'Ch? nhi?u', 'Location', 'best');
grid on;
xlim([0 20000]); % To�n b? d?i �m thanh

% Chi ti?t v�ng frequency �m bass v� mid
subplot(2,2,3);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
title('Chi ti?t v�ng frequency �m mid (20-2000Hz)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
legend('T�n hi?u g?c', 'T�n hi?u + Nhi?u', 'Location', 'best');
grid on;
xlim([20 2000]); % V�ng frequency �m mid

% Frequency spectrum d?ng log scale - To�n d?i
subplot(2,2,4);
semilogy(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
semilogy(f_axis, mag_noisy, 'k', 'LineWidth', 1);
semilogy(f_axis, mag_noise, 'r--', 'LineWidth', 1);
title('Frequency Spectrum (Thang log - To�n d?i)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude (log)', 'FontSize', 12);
legend('T�n hi?u g?c', 'T�n hi?u + Nhi?u', 'Ch? nhi?u', 'Location', 'best');
grid on;
xlim([20 20000]); % D?i t?n �m thanh c� th? nghe

%% Hi?n th? th�ng tin
fprintf('=== TH�NG TIN T�N HI?U �M THANH ===\n');
fprintf('Frequency t�n hi?u ch�nh: %.1f Hz (N?t La chu?n)\n', f_signal);
fprintf('C�c frequency nhi?u: ');
for i = 1:length(f_noise_high)
    fprintf('%.0f ', f_noise_high(i));
end
fprintf('Hz\n');
fprintf('Sampling frequency: %.0f Hz (Chu?n �m thanh CD)\n', fs);
fprintf('Th?i gian t?ng: %.1f gi�y\n', T);
fprintf('S? ?i?m d? li?u: %d\n', N);
fprintf('?? ph�n gi?i frequency: %.2f Hz\n', fs/N);

% T�nh SNR (Signal-to-Noise Ratio)
power_signal = mean(signal_clean.^2);
power_noise = mean(noise_total.^2);
SNR_linear = power_signal / power_noise;
SNR_dB = 10 * log10(SNR_linear);
fprintf('SNR: %.2f dB (%.2f l?n)\n', SNR_dB, SNR_linear);

% Th�ng tin v? d?i t?n �m thanh
fprintf('\n=== PH�N B? N?NG L??NG THEO D?I T?N ===\n');
% Bass (20-250 Hz)
bass_idx = find(f_axis >= 20 & f_axis <= 250);
bass_energy = sum(mag_noisy(bass_idx).^2);
% Mid (250-4000 Hz)  
mid_idx = find(f_axis >= 250 & f_axis <= 4000);
mid_energy = sum(mag_noisy(mid_idx).^2);
% Treble (4000-20000 Hz)
treble_idx = find(f_axis >= 4000 & f_axis <= 20000);
treble_energy = sum(mag_noisy(treble_idx).^2);

total_energy = bass_energy + mid_energy + treble_energy;
fprintf('Bass (20-250 Hz): %.1f%% n?ng l??ng\n', bass_energy/total_energy*100);
fprintf('Mid (250-4000 Hz): %.1f%% n?ng l??ng\n', mid_energy/total_energy*100);
fprintf('Treble (4000-20000 Hz): %.1f%% n?ng l??ng\n', treble_energy/total_energy*100);

%% L?u d? li?u (t�y ch?n)
% save('sine_with_noise.mat', 't', 'signal_clean', 'signal_noisy', 'noise_total', 'fs');
% fprintf('?� l?u d? li?u v�o file sine_with_noise.mat\n');