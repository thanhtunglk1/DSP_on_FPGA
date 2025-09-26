% MATLAB Code for analyzing 24-bit hex audio data
% Sampling frequency: 48kHz, 4096 samples

clear all; close all; clc;

% Basic parameters
fs = 47985;           % Sampling frequency (Hz)
N  = 1024;            % Number of samples
%N  = 2048;            % Number of samples
%N  = 4096;            % Number of samples
T  = 1/fs;            % Sampling period
t  = (0:N-1) * T;     % Time vector

% Read data from file 1
filename1 = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/01_tb/wave_noise.txt';  % Change to your file name
%filename1 = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/04_fir_cof/ecg_wave_0.1.txt';  % Change to your file name
filename2 = 'E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/01_tb/wave_result.txt';  % Change to your file name

% Read data from both files
try
    % Read file 1
    fid1 = fopen(filename1, 'r');
    if fid1 == -1
        error('Cannot open file: %s', filename1);
    end
    hex_data1 = textscan(fid1, '%s');
    fclose(fid1);
    
    % Read file 2
    fid2 = fopen(filename2, 'r');
    if fid2 == -1
        error('Cannot open file: %s', filename2);
    end
    hex_data2 = textscan(fid2, '%s');
    fclose(fid2);
    
    % Process data from file 1
    hex_strings1 = hex_data1{1};
    data1 = zeros(length(hex_strings1), 1);
    
    for i = 1:length(hex_strings1)
        hex_str = hex_strings1{i};
        
        % Remove '0x' prefix if present
        if length(hex_str) > 2 && strcmp(hex_str(1:2), '0x')
            hex_str = hex_str(3:end);
        elseif length(hex_str) > 2 && strcmp(hex_str(1:2), '0X')
            hex_str = hex_str(3:end);
        end
        
        % Convert hex to 24-bit integer
        decimal_val = hex2dec(hex_str);
        
        % Handle 24-bit signed number (two's complement)
        if decimal_val >= 2^23
            decimal_val = decimal_val - 2^24;
        end
        
        % Normalize to [-1, 1]
        data1(i) = decimal_val / (2^23 - 1);
    end
    
    % Process data from file 2
    hex_strings2 = hex_data2{1};
    data2 = zeros(length(hex_strings2), 1);
    
    for i = 1:length(hex_strings2)
        hex_str = hex_strings2{i};
        
        % Remove '0x' prefix if present
        if length(hex_str) > 2 && strcmp(hex_str(1:2), '0x')
            hex_str = hex_str(3:end);
        elseif length(hex_str) > 2 && strcmp(hex_str(1:2), '0X')
            hex_str = hex_str(3:end);
        end
        
        % Convert hex to 24-bit integer
        decimal_val = hex2dec(hex_str);
        
        % Handle 24-bit signed number (two's complement)
        if decimal_val >= 2^23
            decimal_val = decimal_val - 2^24;
        end
        
        % Normalize to [-1, 1]
        data2(i) = decimal_val / (2^23 - 1);
    end
    
    % Ensure exactly 2048 samples
    if length(data1) ~= N
        warning('File 1 has %d samples instead of %d samples', length(data1), N);
        data1 = data1(1:min(length(data1), N));
        if length(data1) < N
            data1 = [data1; zeros(N - length(data1), 1)];
        end
    end
    
    if length(data2) ~= N
        warning('File 2 has %d samples instead of %d samples', length(data2), N);
        data2 = data2(1:min(length(data2), N));
        if length(data2) < N
            data2 = [data2; zeros(N - length(data2), 1)];
        end
    end
    
catch ME
    fprintf('Error reading file: %s\n', ME.message);
    return;
end

% Update time vector according to actual length
t1 = (0:length(data1)-1) * T;
t2 = (0:length(data2)-1) * T;

% Calculate FFT
fft1 = fft(data1);
fft2 = fft(data2);

% Calculate magnitude spectrum (take only first half due to symmetry)
mag1 = abs(fft1(1:floor(length(fft1)/2)+1));
mag2 = abs(fft2(1:floor(length(fft2)/2)+1));

% Frequency vector
f1 = (0:length(mag1)-1) * fs / length(data1);
f2 = (0:length(mag2)-1) * fs / length(data2);

% Convert to dB
mag1_dB = 20 * log10(mag1 + eps);  % eps to avoid log(0)
mag2_dB = 20 * log10(mag2 + eps);

% Plot graphs
figure('Position', [100, 100, 1200, 800]);

% Time domain plots
subplot(2, 2, 1);
plot(t1 * 1000, data1, 'b-', 'LineWidth', 1);
grid on;
xlabel('Time (ms)');
ylabel('Amplitude');
title('File 1 - Time Domain');
xlim([0, max(t1) * 1000]);

subplot(2, 2, 2);
plot(t2 * 1000, data2, 'r-', 'LineWidth', 1);
grid on;
xlabel('Time (ms)');
ylabel('Amplitude');
title('File 2 - Time Domain');
xlim([0, max(t2) * 1000]);

% Frequency domain plots
subplot(2, 2, 3);
semilogx(f1, mag1_dB, 'b-', 'LineWidth', 1);
grid on;
xlabel('Frequency (Hz)');
ylabel('Magnitude (dB)');
title('File 1 - Frequency Spectrum');
xlim([1, fs/2]);

subplot(2, 2, 4);
semilogx(f2, mag2_dB, 'r-', 'LineWidth', 1);
grid on;
xlabel('Frequency (Hz)');
ylabel('Magnitude (dB)');
title('File 2 - Frequency Spectrum');
xlim([1, fs/2]);

% Add common title
%sgtitle('24-bit Audio Data Analysis (48kHz)', 'FontSize', 14, 'FontWeight', 'bold');

% Direct comparison (optional)
figure('Position', [150, 150, 1200, 600]);

subplot(1, 2, 1);
plot(t1 * 1000, data1, 'b-', 'LineWidth', 1);
hold on;
plot(t2 * 1000, data2, 'r-', 'LineWidth', 1);
grid on;
xlabel('Time (ms)');
ylabel('Amplitude');
title('Time Domain Comparison');
legend('File 1', 'File 2', 'Location', 'best');

subplot(1, 2, 2);
semilogx(f1, mag1_dB, 'b-', 'LineWidth', 1);
hold on;
semilogx(f2, mag2_dB, 'r-', 'LineWidth', 1);
grid on;
xlabel('Frequency (Hz)');
ylabel('Magnitude (dB)');
title('Frequency Spectrum Comparison');
legend('File 1', 'File 2', 'Location', 'best');
xlim([1, fs/2]);

% Display basic information
fprintf('\n=== DATA INFORMATION ===\n');
fprintf('Sampling frequency: %d Hz\n', fs);
fprintf('Number of samples File 1: %d\n', length(data1));
fprintf('Number of samples File 2: %d\n', length(data2));
fprintf('Recording time File 1: %.2f ms\n', length(data1) * T * 1000);
fprintf('Recording time File 2: %.2f ms\n', length(data2) * T * 1000);
fprintf('Frequency resolution: %.2f Hz\n', fs / N);

fprintf('\n=== STATISTICAL PARAMETERS ===\n');
fprintf('File 1 - Min: %.4f, Max: %.4f, RMS: %.4f\n', min(data1), max(data1), rms(data1));
fprintf('File 2 - Min: %.4f, Max: %.4f, RMS: %.4f\n', min(data2), max(data2), rms(data2));

% Save results (optional)
%save('audio_analysis_results.mat', 'data1', 'data2', 'fft1', 'fft2', 'fs', 't1', 't2', 'f1', 'f2');
%fprintf('\nResults saved to file: audio_analysis_results.mat\n');