%% T?o sóng sine có nhi?u và phân tích ph? t?n s?
clear; clc; close all;

%% Các tham s? - D?i t?n âm thanh
A_signal = 1;           % Amplitude tín hi?u chính
f_signal = 80;         % Frequency tín hi?u chính - N?t La chu?n (Hz)
A_noise = 0.2;          % Amplitude nhi?u
f_noise_high = [5000, 8000, 12000, 15000]; % Các frequency nhi?u cao (Hz)
A_noise_high = [0.15, 0.1, 0.08, 0.05];    % Amplitude t??ng ?ng
fs = 44100;             % Sampling frequency chu?n âm thanh (Hz)
T = 1;                  % Th?i gian t?ng (giây)
noise_white_level = 0.1; % M?c nhi?u tr?ng

%% T?o vector th?i gian
t = 0:1/fs:T-1/fs;
N = length(t);

%% T?o các tín hi?u
% Tín hi?u sine g?c - frequency âm thanh
signal_clean = A_signal * sin(2*pi*f_signal*t);

% Nhi?u frequency nhi?u cao
noise_sine = zeros(size(t));
for i = 1:length(f_noise_high)
    noise_sine = noise_sine + A_noise_high(i) * sin(2*pi*f_noise_high(i)*t);
end

% Nhi?u tr?ng (gi?i h?n bandwidth âm thanh)
noise_white = noise_white_level * randn(size(t));
% L?c nhi?u tr?ng ?? gi?i h?n trong d?i âm thanh (20Hz - 20kHz)
[b, a] = butter(6, [20 20000]/(fs/2), 'bandpass');
noise_white = filter(b, a, noise_white);

% Nhi?u t?ng h?p
noise_total = noise_sine + noise_white;

% Tín hi?u cu?i cùng
signal_noisy = signal_clean + noise_total;

%% Tính frequency spectrum
% Tr?c frequency (ch? l?y n?a ??u do tính ??i x?ng)
f_axis = (0:N/2-1) * fs/N;

% FFT cho các tín hi?u
fft_clean = fft(signal_clean);
fft_noise = fft(noise_total);
fft_noisy = fft(signal_noisy);

% Magnitude frequency spectrum (ch? l?y n?a ??u)
mag_clean = abs(fft_clean(1:N/2));
mag_noise = abs(fft_noise(1:N/2));
mag_noisy = abs(fft_noisy(1:N/2));

%% V? ?? th? - Figure 1: Tín hi?u sine g?c
figure('Position', [100, 600, 1200, 400]);

subplot(1,2,1);
plot(t, signal_clean, 'b', 'LineWidth', 2);
title('Tín hi?u Audio g?c (440 Hz)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 0.02]); % Hi?n th? 20ms ?? th?y rõ sóng âm thanh

subplot(1,2,2);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2);
title('Frequency Spectrum - Tín hi?u Audio', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
grid on;
xlim([0 2000]); % Hi?n th? ??n 2kHz ?? th?y rõ peak

%% Figure 2: Nhi?u t?ng h?p
figure('Position', [100, 400, 1200, 400]);

subplot(1,2,1);
plot(t, noise_total, 'r', 'LineWidth', 1);
title('Nhi?u âm thanh (Frequency cao + Nhi?u tr?ng)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
grid on;
xlim([0 0.01]); % Hi?n th? 10ms ?? th?y rõ nhi?u frequency cao

subplot(1,2,2);
plot(f_axis, mag_noise, 'r', 'LineWidth', 1);
title('Frequency Spectrum - Nhi?u âm thanh', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
grid on;
xlim([0 20000]); % Hi?n th? toàn b? d?i âm thanh

%% Figure 3: Tín hi?u có nhi?u
figure('Position', [100, 200, 1200, 400]);

subplot(1,2,1);
plot(t, signal_noisy, 'k', 'LineWidth', 1);
title('Tín hi?u Audio + Nhi?u', 'FontSize', 14, 'FontWeight', 'bold');
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
xlim([0 20000]); % Hi?n th? toàn b? d?i âm thanh

%% Figure 4: So sánh t?ng quan
figure('Position', [100, 50, 1400, 600]);

% So sánh trong time domain
subplot(2,2,1);
plot(t, signal_clean, 'b', 'LineWidth', 2); hold on;
plot(t, signal_noisy, 'k', 'LineWidth', 1);
title('So sánh Time Domain', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Time (s)', 'FontSize', 12);
ylabel('Amplitude', 'FontSize', 12);
legend('Tín hi?u g?c (440Hz)', 'Tín hi?u + Nhi?u', 'Location', 'best');
grid on;
xlim([0 0.02]); % Hi?n th? 20ms

% So sánh frequency spectrum - Toàn d?i âm thanh
subplot(2,2,2);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
plot(f_axis, mag_noise, 'r--', 'LineWidth', 1);
title('So sánh Frequency Spectrum (Toàn d?i)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
legend('Tín hi?u g?c', 'Tín hi?u + Nhi?u', 'Ch? nhi?u', 'Location', 'best');
grid on;
xlim([0 20000]); % Toàn b? d?i âm thanh

% Chi ti?t vùng frequency âm bass và mid
subplot(2,2,3);
plot(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
plot(f_axis, mag_noisy, 'k', 'LineWidth', 1);
title('Chi ti?t vùng frequency âm mid (20-2000Hz)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude', 'FontSize', 12);
legend('Tín hi?u g?c', 'Tín hi?u + Nhi?u', 'Location', 'best');
grid on;
xlim([20 2000]); % Vùng frequency âm mid

% Frequency spectrum d?ng log scale - Toàn d?i
subplot(2,2,4);
semilogy(f_axis, mag_clean, 'b', 'LineWidth', 2); hold on;
semilogy(f_axis, mag_noisy, 'k', 'LineWidth', 1);
semilogy(f_axis, mag_noise, 'r--', 'LineWidth', 1);
title('Frequency Spectrum (Thang log - Toàn d?i)', 'FontSize', 14, 'FontWeight', 'bold');
xlabel('Frequency (Hz)', 'FontSize', 12);
ylabel('Magnitude (log)', 'FontSize', 12);
legend('Tín hi?u g?c', 'Tín hi?u + Nhi?u', 'Ch? nhi?u', 'Location', 'best');
grid on;
xlim([20 20000]); % D?i t?n âm thanh có th? nghe

%% Hi?n th? thông tin
fprintf('=== THÔNG TIN TÍN HI?U ÂM THANH ===\n');
fprintf('Frequency tín hi?u chính: %.1f Hz (N?t La chu?n)\n', f_signal);
fprintf('Các frequency nhi?u: ');
for i = 1:length(f_noise_high)
    fprintf('%.0f ', f_noise_high(i));
end
fprintf('Hz\n');
fprintf('Sampling frequency: %.0f Hz (Chu?n âm thanh CD)\n', fs);
fprintf('Th?i gian t?ng: %.1f giây\n', T);
fprintf('S? ?i?m d? li?u: %d\n', N);
fprintf('?? phân gi?i frequency: %.2f Hz\n', fs/N);

% Tính SNR (Signal-to-Noise Ratio)
power_signal = mean(signal_clean.^2);
power_noise = mean(noise_total.^2);
SNR_linear = power_signal / power_noise;
SNR_dB = 10 * log10(SNR_linear);
fprintf('SNR: %.2f dB (%.2f l?n)\n', SNR_dB, SNR_linear);

% Thông tin v? d?i t?n âm thanh
fprintf('\n=== PHÂN B? N?NG L??NG THEO D?I T?N ===\n');
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

%% L?u d? li?u (tùy ch?n)
% save('sine_with_noise.mat', 't', 'signal_clean', 'signal_noisy', 'noise_total', 'fs');
% fprintf('?ã l?u d? li?u vào file sine_with_noise.mat\n');