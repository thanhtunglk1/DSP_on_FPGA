function audioEqualizer()
    % Audio Equalizer v?i Bass, Mid, Treble
    % T�c gi?: [T�n c?a b?n]
    
    % Kh?i t?o bi?n to�n c?c
    global audioData fs playerObj currentAudioData originalAudioData
    
    % T?o figure ch�nh
    fig = figure('Name', 'Audio Equalizer', 'Position', [100, 100, 600, 500], ...
                 'MenuBar', 'none', 'ToolBar', 'none', 'Resize', 'off');
    
    % Kh?i t?o c�c bi?n
    audioData = [];
    fs = 48000; % Sample rate m?c ??nh
    playerObj = [];
    currentAudioData = [];
    originalAudioData = [];
    
    % T?o c�c th�nh ph?n GUI
    createGUI(fig);
end

function createGUI(fig)
    global bassGain midGain trebleGain
    
    % Kh?i t?o gi� tr? gain
    bassGain = 0;
    midGain = 0;
    trebleGain = 0;
    
    % Panel ch�nh
    mainPanel = uipanel('Parent', fig, 'Position', [0.05, 0.05, 0.9, 0.9], ...
                       'Title', 'Audio Equalizer Controls', 'FontSize', 12);
    
    % N�t Load File
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'T?i File MP3', 'Position', [50, 400, 120, 40], ...
              'FontSize', 10, 'Callback', @loadAudioFile);
    
    % N�t Play Original
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'Ph�t G?c', 'Position', [200, 400, 100, 40], ...
              'FontSize', 10, 'Callback', @playOriginal);
    
    % N�t Play Processed
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'Ph�t EQ', 'Position', [320, 400, 100, 40], ...
              'FontSize', 10, 'Callback', @playProcessed);
    
    % N�t Stop
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'D?ng', 'Position', [440, 400, 80, 40], ...
              'FontSize', 10, 'Callback', @stopPlayback);
    
    % Bass Control
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'BASS (20-250 Hz)', 'Position', [50, 340, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    bassSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                          'Position', [50, 300, 200, 30], ...
                          'Min', -20, 'Max', 20, 'Value', 0, ...
                          'Callback', @(src,evt)updateBass(src));
    
    bassValue = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                         'String', '0 dB', 'Position', [260, 305, 50, 20], ...
                         'FontSize', 9);
    
    % Mid Control
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'MID (250-4000 Hz)', 'Position', [50, 260, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    midSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                         'Position', [50, 220, 200, 30], ...
                         'Min', -20, 'Max', 20, 'Value', 0, ...
                         'Callback', @(src,evt)updateMid(src));
    
    midValue = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                        'String', '0 dB', 'Position', [260, 225, 50, 20], ...
                        'FontSize', 9);
    
    % Treble Control
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'TREBLE (4000+ Hz)', 'Position', [50, 180, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    trebleSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                            'Position', [50, 140, 200, 30], ...
                            'Min', -20, 'Max', 20, 'Value', 0, ...
                            'Callback', @(src,evt)updateTreble(src));
    
    trebleValue = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                           'String', '0 dB', 'Position', [260, 145, 50, 20], ...
                           'FontSize', 9);
    
    % N�t Reset
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'Reset', 'Position', [50, 90, 80, 30], ...
              'FontSize', 10, 'Callback', @resetEQ);
    
    % N�t Save
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'L?u File', 'Position', [150, 90, 80, 30], ...
              'FontSize', 10, 'Callback', @saveAudioFile);
    
    % L?u handles cho callback functions
    setappdata(fig, 'bassSlider', bassSlider);
    setappdata(fig, 'midSlider', midSlider);
    setappdata(fig, 'trebleSlider', trebleSlider);
    setappdata(fig, 'bassValue', bassValue);
    setappdata(fig, 'midValue', midValue);
    setappdata(fig, 'trebleValue', trebleValue);
    
    % Status text
    statusText = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                          'String', 'S?n s�ng - Vui l�ng t?i file MP3', ...
                          'Position', [50, 50, 400, 20], ...
                          'FontSize', 9, 'HorizontalAlignment', 'left');
    setappdata(fig, 'statusText', statusText);
end

function loadAudioFile(~, ~)
    global audioData fs originalAudioData
    
    % Ch?n file
    [filename, pathname] = uigetfile({'*.mp3;*.wav;*.m4a', 'Audio Files'}, ...
                                    'Ch?n file �m thanh');
    
    if isequal(filename, 0)
        return;
    end
    
    fullpath = fullfile(pathname, filename);
    
    try
        % ??c file audio
        [audioData, fs] = audioread(fullpath);
        originalAudioData = audioData;
        
        % Chuy?n v? mono n?u l� stereo
        if size(audioData, 2) > 1
            audioData = mean(audioData, 2);
            originalAudioData = audioData;
        end
        
        % C?p nh?t status
        fig = gcbf;
        statusText = getappdata(fig, 'statusText');
        set(statusText, 'String', sprintf('?� t?i: %s (%.1fs, %dHz)', ...
            filename, length(audioData)/fs, fs));
        
        fprintf('File loaded: %s\n', filename);
        fprintf('Duration: %.2f seconds\n', length(audioData)/fs);
        fprintf('Sample Rate: %d Hz\n', fs);
        
    catch ME
        errordlg(['L?i khi t?i file: ' ME.message], 'L?i');
    end
end

function updateBass(src)
    global bassGain
    bassGain = get(src, 'Value');
    
    % C?p nh?t hi?n th?
    fig = get(src, 'Parent');
    while ~strcmp(get(fig, 'Type'), 'figure')
        fig = get(fig, 'Parent');
    end
    
    bassValue = getappdata(fig, 'bassValue');
    set(bassValue, 'String', sprintf('%.1f dB', bassGain));
    
    % �p d?ng EQ
    applyEqualizer();
end

function updateMid(src)
    global midGain
    midGain = get(src, 'Value');
    
    % C?p nh?t hi?n th?
    fig = get(src, 'Parent');
    while ~strcmp(get(fig, 'Type'), 'figure')
        fig = get(fig, 'Parent');
    end
    
    midValue = getappdata(fig, 'midValue');
    set(midValue, 'String', sprintf('%.1f dB', midGain));
    
    % �p d?ng EQ
    applyEqualizer();
end

function updateTreble(src)
    global trebleGain
    trebleGain = get(src, 'Value');
    
    % C?p nh?t hi?n th?
    fig = get(src, 'Parent');
    while ~strcmp(get(fig, 'Type'), 'figure')
        fig = get(fig, 'Parent');
    end
    
    trebleValue = getappdata(fig, 'trebleValue');
    set(trebleValue, 'String', sprintf('%.1f dB', trebleGain));
    
    % �p d?ng EQ
    applyEqualizer();
end

function applyEqualizer()
    global audioData fs currentAudioData originalAudioData bassGain midGain trebleGain
    
    if isempty(originalAudioData)
        return;
    end
    
    % Thi?t k? c�c b? l?c
    % Bass filter (Low-pass + Peaking)
    [b_bass, a_bass] = designBassFilter(fs, bassGain);
    
    % Mid filter (Peaking)
    [b_mid, a_mid] = designMidFilter(fs, midGain);
    
    % Treble filter (High-pass + Peaking)
    [b_treble, a_treble] = designTrebleFilter(fs, trebleGain);
    
    % �p d?ng c�c b? l?c
    audioProcessed = originalAudioData;
    
    if bassGain ~= 0
        audioProcessed = filter(b_bass, a_bass, audioProcessed);
    end
    
    if midGain ~= 0
        audioProcessed = filter(b_mid, a_mid, audioProcessed);
    end
    
    if trebleGain ~= 0
        audioProcessed = filter(b_treble, a_treble, audioProcessed);
    end
    
    % Normalize ?? tr�nh clipping
    maxVal = max(abs(audioProcessed));
    if maxVal > 0.95
        audioProcessed = audioProcessed * (0.95 / maxVal);
    end
    
    currentAudioData = audioProcessed;
end

function [b, a] = designBassFilter(fs, gain)
    % Peaking filter cho bass (center freq = 100 Hz)
    fc = 100;  % Center frequency
    Q = 0.7;   % Quality factor
    
    % Convert gain from dB to linear
    A = 10^(gain/40);
    
    % Peaking filter coefficients
    w = 2 * pi * fc / fs;
    alpha = sin(w) / (2 * Q);
    
    b0 = 1 + alpha * A;
    b1 = -2 * cos(w);
    b2 = 1 - alpha * A;
    a0 = 1 + alpha / A;
    a1 = -2 * cos(w);
    a2 = 1 - alpha / A;
    
    % Normalize
    b = [b0, b1, b2] / a0;
    a = [a0, a1, a2] / a0;
end

function [b, a] = designMidFilter(fs, gain)
    % Peaking filter cho midrange (center freq = 1000 Hz)
    fc = 1000; % Center frequency
    Q = 1.0;   % Quality factor
    
    % Convert gain from dB to linear
    A = 10^(gain/40);
    
    % Peaking filter coefficients
    w = 2 * pi * fc / fs;
    alpha = sin(w) / (2 * Q);
    
    b0 = 1 + alpha * A;
    b1 = -2 * cos(w);
    b2 = 1 - alpha * A;
    a0 = 1 + alpha / A;
    a1 = -2 * cos(w);
    a2 = 1 - alpha / A;
    
    % Normalize
    b = [b0, b1, b2] / a0;
    a = [a0, a1, a2] / a0;
end

function [b, a] = designTrebleFilter(fs, gain)
    % Peaking filter cho treble (center freq = 8000 Hz)
    fc = 8000; % Center frequency
    Q = 0.7;   % Quality factor
    
    % Convert gain from dB to linear
    A = 10^(gain/40);
    
    % Peaking filter coefficients
    w = 2 * pi * fc / fs;
    alpha = sin(w) / (2 * Q);
    
    b0 = 1 + alpha * A;
    b1 = -2 * cos(w);
    b2 = 1 - alpha * A;
    a0 = 1 + alpha / A;
    a1 = -2 * cos(w);
    a2 = 1 - alpha / A;
    
    % Normalize
    b = [b0, b1, b2] / a0;
    a = [a0, a1, a2] / a0;
end

function playOriginal(~, ~)
    global originalAudioData fs playerObj
    
    if isempty(originalAudioData)
        warndlg('Vui l�ng t?i file �m thanh tr??c', 'C?nh b�o');
        return;
    end
    
    % D?ng playback hi?n t?i
    stopPlayback();
    
    % Ph�t �m thanh g?c
    try
        playerObj = audioplayer(originalAudioData, fs);
        play(playerObj);
        
        % C?p nh?t status
        fig = gcbf;
        statusText = getappdata(fig, 'statusText');
        set(statusText, 'String', '?ang ph�t �m thanh g?c...');
        
    catch ME
        errordlg(['L?i khi ph�t �m thanh: ' ME.message], 'L?i');
    end
end

function playProcessed(~, ~)
    global currentAudioData fs playerObj
    
    if isempty(currentAudioData)
        % N?u ch?a c� audio processed, �p d?ng EQ
        applyEqualizer();
        if isempty(currentAudioData)
            warndlg('Vui l�ng t?i file �m thanh tr??c', 'C?nh b�o');
            return;
        end
    end
    
    % D?ng playback hi?n t?i
    stopPlayback();
    
    % Ph�t �m thanh ?� x? l�
    try
        playerObj = audioplayer(currentAudioData, fs);
        play(playerObj);
        
        % C?p nh?t status
        fig = gcbf;
        statusText = getappdata(fig, 'statusText');
        set(statusText, 'String', '?ang ph�t �m thanh ?� EQ...');
        
    catch ME
        errordlg(['L?i khi ph�t �m thanh: ' ME.message], 'L?i');
    end
end

function stopPlayback(~, ~)
    global playerObj
    
    if ~isempty(playerObj) && isplaying(playerObj)
        stop(playerObj);
    end
    
    % C?p nh?t status
    try
        fig = gcbf;
        statusText = getappdata(fig, 'statusText');
        set(statusText, 'String', '?� d?ng ph�t');
    catch
        % Ignore if called from outside callback
    end
end

function resetEQ(~, ~)
    global bassGain midGain trebleGain
    
    fig = gcbf;
    
    % Reset gi� tr?
    bassGain = 0;
    midGain = 0;
    trebleGain = 0;
    
    % Reset sliders
    bassSlider = getappdata(fig, 'bassSlider');
    midSlider = getappdata(fig, 'midSlider');
    trebleSlider = getappdata(fig, 'trebleSlider');
    
    set(bassSlider, 'Value', 0);
    set(midSlider, 'Value', 0);
    set(trebleSlider, 'Value', 0);
    
    % Reset hi?n th?
    bassValue = getappdata(fig, 'bassValue');
    midValue = getappdata(fig, 'midValue');
    trebleValue = getappdata(fig, 'trebleValue');
    
    set(bassValue, 'String', '0 dB');
    set(midValue, 'String', '0 dB');
    set(trebleValue, 'String', '0 dB');
    
    % �p d?ng EQ (reset)
    applyEqualizer();
    
    % C?p nh?t status
    statusText = getappdata(fig, 'statusText');
    set(statusText, 'String', '?� reset EQ v? 0');
end

function saveAudioFile(~, ~)
    global currentAudioData fs
    
    if isempty(currentAudioData)
        warndlg('Kh�ng c� �m thanh ?? l?u', 'C?nh b�o');
        return;
    end
    
    % Ch?n n?i l?u file
    [filename, pathname] = uiputfile({'*.wav', 'WAV Files'}, ...
                                    'L?u file �m thanh');
    
    if isequal(filename, 0)
        return;
    end
    
    fullpath = fullfile(pathname, filename);
    
    try
        % L?u file
        audiowrite(fullpath, currentAudioData, fs);
        
        % C?p nh?t status
        fig = gcbf;
        statusText = getappdata(fig, 'statusText');
        set(statusText, 'String', sprintf('?� l?u: %s', filename));
        
        msgbox('File ?� ???c l?u th�nh c�ng!', 'Th�nh c�ng');
        
    catch ME
        errordlg(['L?i khi l?u file: ' ME.message], 'L?i');
    end
end