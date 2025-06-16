% Khôi ph?c tín hi?u analog t? m?u l??ng t? 24-bit signed
% File: E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/04_fir_cof/sine_wave.txt

clear; clc; close all;

% ???ng d?n file
file_path = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/04_fir_cof/sine_wave.txt';

% Thông s? h? th?ng
fs = 48000;         % T?n s? l?y m?u 48kHz
bit_depth = 24;     % ?? sâu bit
N = 1024;           % S? m?u
T = 1/fs;           % Chu k? l?y m?u

fprintf('=== B?T ??U QUÁ TRÌNH KHÔI PH?C TÍN HI?U ===\n');
fprintf('File ??u vào: %s\n', file_path);

%% B??C 1: ??C D? LI?U HEXADECIMAL T? FILE
try
    % Ki?m tra xem file có t?n t?i không
    if ~exist(file_path, 'file')
        error('File không t?n t?i: %s', file_path);
    end
    
    % ??c d? li?u hexadecimal t? file txt
    fid = fopen(file_path, 'r');
    if fid == -1
        error('Không th? m? file: %s', file_path);
    end
    
    % ??c t?ng dòng và chuy?n ??i t? hex sang decimal
    hex_data = {};
    line_count = 0;
    while ~feof(fid)
        line = fgetl(fid);
        if ischar(line) && ~isempty(strtrim(line))
            line_count = line_count + 1;
            hex_data{line_count} = strtrim(line);
        end
    end
    fclose(fid);
    
    fprintf('??c ???c %d dòng d? li?u hex t? file\n', line_count);
    
    % Chuy?n ??i t? hex sang decimal
    samples = zeros(line_count, 1);
    for i = 1:line_count
        hex_str = hex_data{i};
        % Chuy?n ??i hex sang decimal (unsigned)
        unsigned_val = hex2dec(hex_str);
        
        % Chuy?n ??i t? unsigned sang signed 24-bit
        if unsigned_val >= 2^23
            % N?u bit MSB = 1, ?ây là s? âm trong 2's complement
            samples(i) = unsigned_val - 2^24;
        else
            % S? d??ng
            samples(i) = unsigned_val;
        end
    end
    
    fprintf('?ã chuy?n ??i thành công %d m?u t? hex sang decimal\n', length(samples));
    fprintf('Ví d? chuy?n ??i:\n');
    for i = 1:min(5, length(samples))
        fprintf('  %s (hex) -> %d (dec)\n', hex_data{i}, samples(i));
    end
    
    % Ki?m tra s? l??ng m?u
    if length(samples) ~= N
        fprintf('C?nh báo: S? m?u th?c t? (%d) khác v?i mong ??i (%d)\n', length(samples), N);
        N = length(samples);  % C?p nh?t s? m?u th?c t?
    end
    
catch ME
    error('Không th? ??c file: %s\nL?i: %s', file_path, ME.message);
end

%% B??C 2: CHUY?N ??I VÀ CHU?N HÓA D? LI?U
% Ph?m vi 24-bit signed: -2^23 ??n 2^23-1
max_value = 2^(bit_depth-1) - 1;  % 8388607
min_value = -2^(bit_depth-1);     % -8388608

% Ki?m tra gi?i h?n và ép ki?u
samples = double(samples);
samples = max(min(samples, max_value), min_value);

% Chu?n hóa v? kho?ng [-1, 1]
normalized_samples = samples / max_value;

fprintf('Ph?m vi giá tr? g?c (hex->dec): %.0f ??n %.0f\n', min(samples), max(samples));
fprintf('Ph?m vi giá tr? chu?n hóa: %.6f ??n %.6f\n', min(normalized_samples), max(normalized_samples));

%% B??C 3: T?O TR?C TH?I GIAN
% Th?i gian c?a các m?u r?i r?c
t_samples = (0:N-1)' * T;

% T?o tr?c th?i gian liên t?c v?i ?? phân gi?i cao
oversampling_factor = 8;  % T?ng ?? phân gi?i
fs_new = fs * oversampling_factor;
t_continuous = (0:1/fs_new:(N-1)*T)';

fprintf('Th?i gian tín hi?u: %.4f ms\n', (N-1)*T*1000);
fprintf('T?n s? l?y m?u m?i: %d Hz\n', fs_new);

%% B??C 4: KHÔI PH?C TÍN HI?U ANALOG
% S? d?ng ph??ng pháp n?i suy cubic spline cho ?? chính xác cao
reconstructed_signal = interp1(t_samples, normalized_samples, t_continuous, 'spline');

% Lo?i b? các giá tr? NaN n?u có
reconstructed_signal(isnan(reconstructed_signal)) = 0;

%% B??C 5: L?C CH?NG NHI?U (ANTI-ALIASING)
% Thi?t k? b? l?c thông th?p Butterworth
cutoff_freq = fs/2 * 0.45;  % T?n s? c?t = 45% c?a t?n s? Nyquist g?c
normalized_cutoff = cutoff_freq / (fs_new/2);

if normalized_cutoff < 1
    [b, a] = butter(4, normalized_cutoff, 'low');
    reconstructed_signal = filtfilt(b, a, reconstructed_signal);
    fprintf('?ã áp d?ng b? l?c anti-aliasing t?i %.1f Hz\n', cutoff_freq);
end

%% B??C 6: HI?N TH? K?T QU?
fprintf('\n=== THÔNG TIN K?T QU? ===\n');
fprintf('S? ?i?m tín hi?u khôi ph?c: %d\n', length(reconstructed_signal));
fprintf('T? l? oversampling: %dx\n', oversampling_factor);
fprintf('?? phân gi?i th?i gian: %.6f ms\n', 1/fs_new*1000);

%% B??C 7: V? BI?U ??
figure('Position', [100, 100, 1400, 900], 'Name', 'Khôi ph?c tín hi?u Analog t? 24-bit Digital');

% Subplot 1: Tín hi?u s? g?c
subplot(2,2,1);
stem(t_samples*1000, normalized_samples, 'b', 'LineWidth', 1.2, 'MarkerSize', 4);
grid on;
title('Tín hi?u s? g?c (24-bit, 48kHz)', 'FontSize', 11, 'FontWeight', 'bold');
xlabel('Th?i gian (ms)');
ylabel('Biên ??');
xlim([0, max(t_samples)*1000]);

% Subplot 2: Tín hi?u analog khôi ph?c (toàn b?)
subplot(2,2,2);
plot(t_continuous*1000, reconstructed_signal, 'r', 'LineWidth', 1.5);
hold on;
stem(t_samples*1000, normalized_samples, 'b', 'MarkerSize', 3);
grid on;
title('Tín hi?u Analog khôi ph?c (Toàn b?)', 'FontSize', 11, 'FontWeight', 'bold');
xlabel('Th?i gian (ms)');
ylabel('Biên ??');
legend('Analog khôi ph?c', 'M?u g?c', 'Location', 'best');
xlim([0, max(t_continuous)*1000]);

% Subplot 3: Chi ti?t m?t ph?n nh?
subplot(2,2,3);
% Hi?n th? 100 m?u ??u tiên
end_idx = min(100, N);
t_zoom = t_samples(1:end_idx);
samples_zoom = normalized_samples(1:end_idx);
mask = t_continuous <= t_zoom(end);
t_cont_zoom = t_continuous(mask);
recon_zoom = reconstructed_signal(mask);

plot(t_cont_zoom*1000, recon_zoom, 'r', 'LineWidth', 2);
hold on;
stem(t_zoom*1000, samples_zoom, 'b', 'LineWidth', 1.5, 'MarkerSize', 6);
grid on;
title(sprintf('Chi ti?t %d m?u ??u', end_idx), 'FontSize', 11, 'FontWeight', 'bold');
xlabel('Th?i gian (ms)');
ylabel('Biên ??');
legend('Analog khôi ph?c', 'M?u g?c', 'Location', 'best');

% Subplot 4: Ph? t?n s?
subplot(2,2,4);
% FFT c?a tín hi?u g?c
N_fft = 2^nextpow2(N);
f_original = (0:N_fft-1) * fs / N_fft;
X_original = fft(normalized_samples, N_fft);

% FFT c?a tín hi?u khôi ph?c (l?y m?u l?i v? fs ?? so sánh)
recon_downsampled = reconstructed_signal(1:oversampling_factor:end);
if length(recon_downsampled) > N
    recon_downsampled = recon_downsampled(1:N);
end
X_recon = fft(recon_downsampled, N_fft);

% V? ph? magnitude
semilogx(f_original(1:N_fft/2), 20*log10(abs(X_original(1:N_fft/2)) + eps), 'b', 'LineWidth', 1.5);
hold on;
semilogx(f_original(1:N_fft/2), 20*log10(abs(X_recon(1:N_fft/2)) + eps), 'r--', 'LineWidth', 1.5);
grid on;
title('So sánh ph? t?n s?', 'FontSize', 11, 'FontWeight', 'bold');
xlabel('T?n s? (Hz)');
ylabel('Magnitude (dB)');
legend('Tín hi?u g?c', 'Tín hi?u khôi ph?c', 'Location', 'best');
xlim([10, fs/2]);

%% B??C 8: L?U K?T QU?
% T?o tên file output
[filepath, filename, ~] = fileparts(file_path);
output_path = fullfile(filepath, [filename '_reconstructed']);

% L?u workspace
save([output_path '.mat'], 't_continuous', 'reconstructed_signal', ...
     't_samples', 'normalized_samples', 'samples', 'fs', 'fs_new');

% L?u tín hi?u analog sang file CSV
output_csv = [output_path '_analog.csv'];
writematrix([t_continuous*1000, reconstructed_signal], output_csv);

% L?u hình ?nh
saveas(gcf, [output_path '_plot.png']);

fprintf('\n=== ?Ã L?U K?T QU? ===\n');
fprintf('File MAT: %s.mat\n', output_path);
fprintf('File CSV: %s\n', output_csv);
fprintf('File ?nh: %s_plot.png\n', output_path);

%% B??C 9: TH?NG KÊ CHI TI?T
fprintf('\n=== TH?NG KÊ CHI TI?T ===\n');
fprintf('RMS tín hi?u g?c: %.6f\n', rms(normalized_samples));
fprintf('RMS tín hi?u khôi ph?c: %.6f\n', rms(reconstructed_signal));

% Tính SNR ??c l??ng
noise_floor = std(diff(normalized_samples));
signal_power = var(normalized_samples);
snr_estimate = 10*log10(signal_power / noise_floor^2);
fprintf('SNR ??c l??ng: %.2f dB\n', snr_estimate);

% Tính THD n?u là sóng sine
try
    % Tìm t?n s? c? b?n
    [pxx, f] = periodogram(normalized_samples, [], [], fs);
    [~, idx] = max(pxx(f > 10 & f < fs/2));  % B? qua DC
    f_fund = f(f > 10 & f < fs/2);
    fundamental_freq = f_fund(idx);
    fprintf('T?n s? c? b?n phát hi?n: %.2f Hz\n', fundamental_freq);
catch
    fprintf('Không th? xác ??nh t?n s? c? b?n\n');
end

fprintf('\n=== HOÀN THÀNH QUÁ TRÌNH KHÔI PH?C ===\n');

% Hi?n th? m?t s? giá tr? m?u ?? ki?m tra
fprintf('\n=== M?T S? GIÁ TR? M?U ===\n');
fprintf('5 m?u ??u (hex): %s\n', strjoin(hex_data(1:min(5,end)), ', '));
fprintf('5 m?u ??u (dec): ');
fprintf('%.0f ', samples(1:min(5,end)));
fprintf('\n');
fprintf('5 m?u chu?n hóa: ');
fprintf('%.6f ', normalized_samples(1:min(5,end)));
fprintf('\n');
fprintf('5 giá tr? khôi ph?c: ');
fprintf('%.6f ', reconstructed_signal(1:min(5,end)));
fprintf('\n');