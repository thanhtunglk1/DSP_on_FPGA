% ===================================================================
% SCRIPT PHÂN TÍCH TÍN HI?U ECG VÀ FFT
% Tác gi?: Claude AI
% Mô t?: ??c file ECG .txt và th?c hi?n phân tích ph? t?n s?
% T??ng thích v?i các phiên b?n MATLAB c?
% ===================================================================

clear all; close all; clc;

% THI?T L?P ???NG D?N FILE
file_path = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/04_fir_cof/ecg_wave_0.1.txt';
fs = 48000; % T?n s? l?y m?u 48kHz

fprintf('=== BAT DAU PHAN TICH TIN HIEU ECG ===\n');
fprintf('Dang doc file: %s\n', file_path);

% ===================================================================
% PH?N 1: ??C D? LI?U T? FILE (H? TR? ??NH D?NG HEX)
% ===================================================================

samples = [];
try
    % Th? ??c file b?ng load (cho s? th?p phân)
    samples = load(file_path);
    fprintf('Da doc thanh cong file bang load\n');
catch ME
    fprintf('Loi load: %s\n', ME.message);
    fprintf('Dang thu phuong phap khac...\n');
    
    % Th? ??c file d?ng text v?i ??nh d?ng hex ho?c decimal
    try
        fid = fopen(file_path, 'r');
        if fid == -1
            error('Khong the mo file: %s', file_path);
        end
        
        % ??c toàn b? file d??i d?ng text
        file_content = fileread(file_path);
        fclose(fid);
        
        % Ki?m tra ??nh d?ng hex (có ch?a A-F)
        if ~isempty(regexp(file_content, '[A-Fa-f]', 'once'))
            fprintf('Phat hien dinh dang HEX. Dang chuyen doi...\n');
            
            % Tách các giá tr? hex
            hex_tokens = regexp(file_content, '[0-9A-Fa-f]+', 'match');
            
            % Chuy?n ??i t? hex sang decimal
            samples = zeros(length(hex_tokens), 1);
            for i = 1:length(hex_tokens)
                samples(i) = hex2dec(hex_tokens{i});
            end
            
            fprintf('Da chuyen doi %d gia tri tu HEX sang DEC\n', length(samples));
        else
            % Th? ??c d?ng s? th?p phân
            fid = fopen(file_path, 'r');
            data_cell = textscan(fid, '%f');
            fclose(fid);
            samples = data_cell{1};
            fprintf('Da doc thanh cong file bang textscan\n');
        end
        
    catch
        error('Khong the doc file. Kiem tra duong dan va dinh dang!');
    end
end

% Ki?m tra n?u không ??c ???c d? li?u
if isempty(samples)
    error('Khong doc duoc du lieu tu file. Kiem tra dinh dang file!');
end

% Chuy?n ??i thành vector c?t
samples = samples(:);

% N?u d? li?u là s? nguyên không d?u, chuy?n v? d?ng signed
if all(samples >= 0) && max(samples) > 32767
    fprintf('Chuyen doi du lieu tu unsigned sang signed...\n');
    % Gi? s? d? li?u 16-bit unsigned, chuy?n v? signed
    samples(samples > 32767) = samples(samples > 32767) - 65536;
end

% Chu?n hóa d? li?u n?u c?n
if max(abs(samples)) > 10
    fprintf('Chuan hoa du lieu...\n');
    samples = samples / max(abs(samples));
end

% Ki?m tra và ?i?u ch?nh s? m?u
N = length(samples);
if N ~= 1024
    fprintf('So mau khong phai 1024. Dang co %d mau.\n', N);
    if N < 1024
        fprintf('Padding voi zeros de du 1024 mau...\n');
        samples = [samples; zeros(1024-N, 1)];
        N = 1024;
    elseif N > 1024
        fprintf('Cat bot de lay 1024 mau dau tien...\n');
        samples = samples(1:1024);
        N = 1024;
    end
else
    fprintf('Du lieu co dung 1024 mau.\n');
end

% ===================================================================
% PH?N 2: KHÔI PH?C TÍN HI?U VÀ TÍNH TOÁN
% ===================================================================

% T?o vector th?i gian
dt = 1/fs;
t = (0:N-1) * dt;

% Tín hi?u ?ã khôi ph?c
signal_recovered = samples;

% Th?c hi?n FFT
Y = fft(signal_recovered);

% T?o vector t?n s? (ch? l?y n?a ??u ph?)
f = (0:N-1) * fs / N;
f_half = f(1:N/2+1);
Y_half = Y(1:N/2+1);

% Tính ph? biên ?? và pha
magnitude_spectrum = abs(Y_half);
phase_spectrum = angle(Y_half);

% Chu?n hóa ph? biên ??
magnitude_spectrum(2:end-1) = 2 * magnitude_spectrum(2:end-1);

% ===================================================================
% PH?N 3: V? BI?U ??
% ===================================================================

figure('Position', [100, 100, 1400, 900], 'Name', 'Phan tich tin hieu ECG');

% Subplot 1: Tín hi?u th?i gian
subplot(3,1,1);
plot(t*1000, signal_recovered, 'b-', 'LineWidth', 1.5);
xlabel('Thoi gian (ms)', 'FontSize', 12);
ylabel('Bien do', 'FontSize', 12);
title('Tin hieu ECG trong mien thoi gian', 'FontSize', 14, 'FontWeight', 'bold');
grid on;
xlim([0, max(t)*1000]);

% Subplot 2: Ph? biên ??
subplot(3,1,2);
plot(f_half/1000, 20*log10(magnitude_spectrum + eps), 'r-', 'LineWidth', 1.5);
xlabel('Tan so (kHz)', 'FontSize', 12);
ylabel('Bien do (dB)', 'FontSize', 12);
title('Pho bien do (FFT)', 'FontSize', 14, 'FontWeight', 'bold');
grid on;
xlim([0, fs/2000]);

% Subplot 3: Ph? pha
subplot(3,1,3);
plot(f_half/1000, phase_spectrum*180/pi, 'g-', 'LineWidth', 1.5);
xlabel('Tan so (kHz)', 'FontSize', 12);
ylabel('Pha (do)', 'FontSize', 12);
title('Pho pha (FFT)', 'FontSize', 14, 'FontWeight', 'bold');
grid on;
xlim([0, fs/2000]);
ylim([-180, 180]);

% ===================================================================
% PH?N 4: HI?N TH? THÔNG TIN CHI TI?T
% ===================================================================

fprintf('\n==================================================\n');
fprintf('THONG TIN TIN HIEU ECG\n');
fprintf('==================================================\n');
fprintf('File: %s\n', file_path);
fprintf('So mau: %d\n', N);
fprintf('Tan so lay mau: %d Hz\n', fs);
fprintf('Do phan giai tan so: %.2f Hz\n', fs/N);
fprintf('Thoi gian tin hieu: %.2f ms\n', (N-1)*dt*1000);
fprintf('Tan so Nyquist: %d Hz\n', fs/2);

% Tính các thông s? th?ng kê
signal_max = max(signal_recovered);
signal_min = min(signal_recovered);
signal_mean = mean(signal_recovered);
signal_std = std(signal_recovered);
signal_rms = rms(signal_recovered);

fprintf('\n--------------------------------------------------\n');
fprintf('THONG SO THONG KE\n');
fprintf('--------------------------------------------------\n');
fprintf('Gia tri max: %.6f\n', signal_max);
fprintf('Gia tri min: %.6f\n', signal_min);
fprintf('Gia tri trung binh: %.6f\n', signal_mean);
fprintf('Do lech chuan: %.6f\n', signal_std);
fprintf('Gia tri RMS: %.6f\n', signal_rms);

% Tìm các ??nh ph? chính
[peaks, locs] = findpeaks(magnitude_spectrum, 'MinPeakHeight', max(magnitude_spectrum)*0.1);
if ~isempty(peaks)
    fprintf('\n--------------------------------------------------\n');
    fprintf('CAC THANH PHAN TAN SO CHINH\n');
    fprintf('--------------------------------------------------\n');
    [sorted_peaks, idx] = sort(peaks, 'descend');
    sorted_locs = locs(idx);
    for i = 1:min(5, length(sorted_peaks))
        fprintf('Tan so: %7.1f Hz | Bien do: %8.2f\n', ...
            f_half(sorted_locs(i)), sorted_peaks(i));
    end
end

% Phân tích b?ng t?n ECG
ecg_band_low = 0.5; % Hz
ecg_band_high = 40; % Hz

ecg_indices = find(f_half >= ecg_band_low & f_half <= ecg_band_high);
total_power = sum(magnitude_spectrum.^2);
ecg_power = sum(magnitude_spectrum(ecg_indices).^2);
ecg_power_ratio = ecg_power / total_power * 100;

fprintf('\n--------------------------------------------------\n');
fprintf('PHAN TICH ECG CHUYEN BIET\n');
fprintf('--------------------------------------------------\n');
fprintf('Bang tan ECG: %.1f - %.1f Hz\n', ecg_band_low, ecg_band_high);
fprintf('Nang luong trong bang ECG: %.2f%%\n', ecg_power_ratio);

% Tìm t?n s? dominant trong b?ng ECG
if ~isempty(ecg_indices)
    [~, max_idx] = max(magnitude_spectrum(ecg_indices));
    dominant_freq = f_half(ecg_indices(max_idx));
    fprintf('Tan so dominant: %.2f Hz\n', dominant_freq);
    
    % ??c tính nh?p tim (n?u có th?)
    if dominant_freq > 0.5 && dominant_freq < 5
        heart_rate_bpm = dominant_freq * 60;
        fprintf('Uoc tinh nhip tim: %.0f BPM\n', heart_rate_bpm);
    end
end

% Phân tích nhi?u
noise_band_indices = find(f_half > 60); % T?n s? > 60Hz th??ng là nhi?u
if ~isempty(noise_band_indices)
    noise_power = sum(magnitude_spectrum(noise_band_indices).^2);
    noise_power_ratio = noise_power / total_power * 100;
    fprintf('Ti le nhieu (>60Hz): %.2f%%\n', noise_power_ratio);
end

% Phân tích d?i t?n s? chính
fprintf('\n--------------------------------------------------\n');
fprintf('PHAN TICH DAI TAN SO\n');
fprintf('--------------------------------------------------\n');

% DC component
dc_power = magnitude_spectrum(1)^2 / total_power * 100;
fprintf('Thanh phan DC (0 Hz): %.2f%%\n', dc_power);

% Low frequency (0-10 Hz)
lf_indices = find(f_half >= 0 & f_half <= 10);
lf_power = sum(magnitude_spectrum(lf_indices).^2) / total_power * 100;
fprintf('Tan so thap (0-10 Hz): %.2f%%\n', lf_power);

% Mid frequency (10-100 Hz)
mf_indices = find(f_half > 10 & f_half <= 100);
if ~isempty(mf_indices)
    mf_power = sum(magnitude_spectrum(mf_indices).^2) / total_power * 100;
    fprintf('Tan so trung (10-100 Hz): %.2f%%\n', mf_power);
end

% High frequency (>100 Hz)
hf_indices = find(f_half > 100);
if ~isempty(hf_indices)
    hf_power = sum(magnitude_spectrum(hf_indices).^2) / total_power * 100;
    fprintf('Tan so cao (>100 Hz): %.2f%%\n', hf_power);
end

fprintf('\n==================================================\n');
fprintf('PHAN TICH HOAN THANH!\n');
fprintf('==================================================\n');

% Hi?n th? thông tin v? d? li?u g?c
fprintf('\nThong tin du lieu goc:\n');
fprintf('- Dinh dang: %s\n', class(samples));
fprintf('- Gia tri min goc: %.6f\n', min(samples));
fprintf('- Gia tri max goc: %.6f\n', max(samples));
fprintf('- Da chuan hoa: %s\n', iif(max(abs(samples)) <= 1, 'Co', 'Khong'));

fprintf('\nScript hoan thanh! Kiem tra cac bieu do da duoc tao.\n');

% Hàm h? tr? cho phiên b?n MATLAB c?
function result = iif(condition, true_value, false_value)
    if condition
        result = true_value;
    else
        result = false_value;
    end
end