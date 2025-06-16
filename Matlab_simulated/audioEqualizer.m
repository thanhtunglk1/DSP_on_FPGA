function audioEqualizer()
    % Audio Equalizer v?i Bass, Mid, Treble (Real-time)
    % Tác gi?: Grok
    
    % Kh?i t?o bi?n toàn c?c
    global audioData fs playerObj currentAudioData originalAudioData
    global bassGain midGain trebleGain isPlaying audioReader deviceWriter
    global playbackPos audioDuration statusText timelineSlider
    % E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/04_fir_cof/sine_wave.txt
    % Kh?i t?o các bi?n
    audioData = [];
    fs = 44100; % Sample rate m?c ??nh
    playerObj = [];
    currentAudioData = [];
    originalAudioData = [];
    bassGain = 0;
    midGain = 0;
    trebleGain = 0;
    isPlaying = false;
    audioReader = [];
    deviceWriter = [];
    playbackPos = 0;
    audioDuration = 0;
    
    % T?o figure chính
    fig = figure('Name', 'Real-time Audio Equalizer', 'Position', [100, 100, 600, 550], ...
                 'MenuBar', 'none', 'ToolBar', 'none', 'Resize', 'off', ...
                 'CloseRequestFcn', @closeFigure);
    
    % T?o các thành ph?n GUI
    createGUI(fig);
end

function createGUI(fig)
    global bassGain midGain trebleGain statusText timelineSlider
    
    % Panel chính
    mainPanel = uipanel('Parent', fig, 'Position', [0.05, 0.05, 0.9, 0.9], ...
                       'Title', 'Real-time Audio Equalizer Controls', 'FontSize', 12);
    
    % Nút Load File
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'T?i File MP3', 'Position', [50, 450, 120, 40], ...
              'FontSize', 10, 'Callback', @loadAudioFile);
    
    % Nút Play/Pause
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'Phát/T?m d?ng', 'Position', [200, 450, 100, 40], ...
              'FontSize', 10, 'Callback', @togglePlayback);
    
    % Nút Stop
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'D?ng', 'Position', [320, 450, 80, 40], ...
              'FontSize', 10, 'Callback', @stopPlayback);
    
    % Bass Control
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'BASS (20-250 Hz)', 'Position', [50, 390, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    bassSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                          'Position', [50, 350, 200, 30], ...
                          'Min', -20, 'Max', 20, 'Value', 0, ...
                          'Callback', @(src,evt)updateBass(src), ...
                          'SliderStep', [0.01 0.1]);
    
    bassValue = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                         'String', '0 dB', 'Position', [260, 355, 50, 20], ...
                         'FontSize', 9);
    
    % Mid Control
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'MID (250-4000 Hz)', 'Position', [50, 310, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    midSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                         'Position', [50, 270, 200, 30], ...
                         'Min', -20, 'Max', 20, 'Value', 0, ...
                         'Callback', @(src,evt)updateMid(src), ...
                         'SliderStep', [0.01 0.1]);
    
    midValue = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                        'String', '0 dB', 'Position', [260, 275, 50, 20], ...
                        'FontSize', 9);
    
    % Treble Control
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'TREBLE (4000+ Hz)', 'Position', [50, 230, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    trebleSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                            'Position', [50, 190, 200, 30], ...
                            'Min', -20, 'Max', 20, 'Value', 0, ...
                            'Callback', @(src,evt)updateTreble(src), ...
                            'SliderStep', [0.01 0.1]);
    
    trebleValue = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                           'String', '0 dB', 'Position', [260, 195, 50, 20], ...
                           'FontSize', 9);
    
    % Timeline Slider
    uicontrol('Parent', mainPanel, 'Style', 'text', ...
              'String', 'Th?i gian', 'Position', [50, 150, 120, 20], ...
              'FontSize', 10, 'FontWeight', 'bold');
    
    timelineSlider = uicontrol('Parent', mainPanel, 'Style', 'slider', ...
                             'Position', [50, 110, 200, 30], ...
                             'Min', 0, 'Max', 100, 'Value', 0, ...
                             'Enable', 'off', ...
                             'Callback', @(src,evt)seekAudio(src));
    
    timeDisplay = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                           'String', '0:00 / 0:00', 'Position', [260, 115, 100, 20], ...
                           'FontSize', 9);
    
    % Nút Reset
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'Reset', 'Position', [50, 60, 80, 30], ...
              'FontSize', 10, 'Callback', @resetEQ);
    
    % Nút Save
    uicontrol('Parent', mainPanel, 'Style', 'pushbutton', ...
              'String', 'L?u File', 'Position', [150, 60, 80, 30], ...
              'FontSize', 10, 'Callback', @saveAudioFile);
    
    % Status text
    statusText = uicontrol('Parent', mainPanel, 'Style', 'text', ...
                          'String', 'S?n sàng - Vui lòng t?i file MP3', ...
                          'Position', [50, 20, 400, 20], ...
                          'FontSize', 9, 'HorizontalAlignment', 'left');
    
    % L?u handles
    setappdata(fig, 'bassSlider', bassSlider);
    setappdata(fig, 'midSlider', midSlider);
    setappdata(fig, 'trebleSlider', trebleSlider);
    setappdata(fig, 'bassValue', bassValue);
    setappdata(fig, 'midValue', midValue);
    setappdata(fig, 'trebleValue', trebleValue);
    setappdata(fig, 'timeDisplay', timeDisplay);
end

function loadAudioFile(~, ~)
    global audioData fs originalAudioData audioReader audioDuration timelineSlider statusText
    
    % Ch?n file
    [filename, pathname] = uigetfile({'*.mp3;*.wav;*.m4a', 'Audio Files'}, ...
                                    'Ch?n file âm thanh');
    
    if isequal(filename, 0)
        return;
    end
    
    fullpath = fullfile(pathname, filename);
    
    try
        % ??c file audio
        [audioData, fs] = audioread(fullpath);
        originalAudioData = audioData;
        
        % Chuy?n v? mono n?u là stereo
        if size(audioData, 2) > 1
            audioData = mean(audioData, 2);
            originalAudioData = audioData;
        end
        
        % Thi?t l?p audio reader
        if ~isempty(audioReader)
            release(audioReader);
        end
        audioReader = dsp.AudioFileReader(fullpath, 'SamplesPerFrame', 1024);
        audioDuration = length(audioData) / fs;
        
        % C?p nh?t timeline slider
        set(timelineSlider, 'Max', audioDuration, 'Enable', 'on');
        
        % C?p nh?t status
        set(statusText, 'String', sprintf('?ã t?i: %s (%.1fs, %dHz)', ...
            filename, audioDuration, fs));
        
        % C?p nh?t time display
        fig = gcbf;
        timeDisplay = getappdata(fig, 'timeDisplay');
        set(timeDisplay, 'String', sprintf('0:00 / %s', sec2str(audioDuration)));
        
        fprintf('File loaded: %s\n', filename);
        fprintf('Duration: %.2f seconds\n', audioDuration);
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
end

function togglePlayback(~, ~)
    global isPlaying audioReader deviceWriter fs bassGain midGain trebleGain
    global playbackPos audioDuration statusText timelineSlider
    
    if isempty(audioReader)
        warndlg('Vui lòng t?i file âm thanh tr??c', 'C?nh báo');
        return;
    end
    
    if ~isPlaying
        % Kh?i t?o device writer
        if ~isempty(deviceWriter)
            release(deviceWriter);
        end
        deviceWriter = audioDeviceWriter('SampleRate', fs);
        
        % Thi?t k? b? l?c
        [b_bass, a_bass] = designBassFilter(fs, bassGain);
        [b_mid, a_mid] = designMidFilter(fs, midGain);
        [b_treble, a_treble] = designTrebleFilter(fs, trebleGain);
        
        isPlaying = true;
        set(statusText, 'String', '?ang phát âm thanh...');
        
        % Timer ?? c?p nh?t timeline
        t = timer('ExecutionMode', 'fixedRate', 'Period', 0.1, ...
                  'TimerFcn', @updateTimeline);
        start(t);
        
        try
            while ~isDone(audioReader) && isPlaying
                % ??c chunk audio
                audioChunk = step(audioReader);
                
                % Chuy?n v? mono n?u c?n
                if size(audioChunk, 2) > 1
                    audioChunk = mean(audioChunk, 2);
                end
                
                % Áp d?ng các b? l?c
                if bassGain ~= 0
                    audioChunk = filter(b_bass, a_bass, audioChunk);
                end
                if midGain ~= 0
                    audioChunk = filter(b_mid, a_mid, audioChunk);
                end
                if trebleGain ~= 0
                    audioChunk = filter(b_treble, a_treble, audioChunk);
                end
                
                % Normalize
                maxVal = max(abs(audioChunk));
                if maxVal > 0.95
                    audioChunk = audioChunk * (0.95 / maxVal);
                end
                
                % Phát chunk
                deviceWriter(audioChunk); % G?i tr?c ti?p v?i ??i t??ng scalar
                
                % C?p nh?t v? trí
                playbackPos = playbackPos + (length(audioChunk) / fs);
                if playbackPos > audioDuration
                    playbackPos = audioDuration;
                    isPlaying = false;
                end
            end
            
            stopPlayback();
        catch ME
            errordlg(['L?i khi phát âm thanh: ' ME.message], 'L?i');
            stopPlayback();
        end
    else
        isPlaying = false;
        set(statusText, 'String', '?ã t?m d?ng phát');
    end
end

function updateTimeline(~, ~)
    global playbackPos audioDuration timelineSlider statusText isPlaying
    
    if isPlaying
        % Update slider
        set(timelineSlider, 'Value', playbackPos);
        
        % Update time display
        fig = gcbf;
        timeDisplay = getappdata(fig, 'timeDisplay');
        set(timeDisplay, 'String', sprintf('%s / %s', sec2str(playbackPos), sec2str(audioDuration)));
    end
    % Stop timer if playback ended
    if ~isPlaying
        stop(findobj(0, 'Type', 'timer'));
    end
end

function seekAudio(src)
    global audioReader isPlaying playbackPos fs
    
    if isempty(audioReader)
        return;
    end
    
    % Get new position
    newPos = get(src, 'Value');
    
    % Stop current playback
    stopPlayback();
    
    % Reset audio reader and seek
    release(audioReader);
    audioReader = dsp.AudioFileReader(audioReader.Filename, 'SamplesPerFrame', 1024, ...
                                     'CurrentSample', round(newPos * fs) + 1);
    playbackPos = newPos;
    
    % Update time display
    fig = get(src, 'Parent');
    while ~strcmp(get(fig, 'Type'), 'figure')
        fig = get(fig, 'Parent');
    end
    timeDisplay = getappdata(fig, 'timeDisplay');
    set(timeDisplay, 'String', sprintf('%s / %s', sec2str(playbackPos), sec2str(audioDuration)));
    
    % Resume playback
    if isPlaying
        togglePlayback();
    end
end

function [b, a] = designBassFilter(fs, gain)
    fc = 100;  % Center frequency
    Q = 0.7;   % Quality factor
    
    A = 10^(gain/40);
    w = 2 * pi * fc / fs;
    alpha = sin(w) / (2 * Q);
    
    b0 = 1 + alpha * A;
    b1 = -2 * cos(w);
    b2 = 1 - alpha * A;
    a0 = 1 + alpha / A;
    a1 = -2 * cos(w);
    a2 = 1 - alpha / A;
    
    b = [b0, b1, b2] / a0;
    a = [a0, a1, a2] / a0;
end

function [b, a] = designMidFilter(fs, gain)
    fc = 1000; % Center frequency
    Q = 1.0;   % Quality factor
    
    A = 10^(gain/40);
    
    w = 2 * pi * fc / fs;
    alpha = sin(w) / (2 * Q);
    
    b0 = 1 + alpha * A;
    b1 = -2 * cos(w);
    b2 = 1 - alpha * A;
    a0 = 1 + alpha / A;
    a1 = -2 * cos(w);
    a2 = 1 - alpha / A;
    
    b = [b0, b1, b2] / a0;
    a = [a0, a1, a2] / a0;
end

function [b, a] = designTrebleFilter(fs, gain)
    fc = 8000; % Center frequency
    Q = 0.7;   % Quality factor
    
    A = 10^(gain/40);
    
    w = 2 * pi * fc / fs;
    alpha = sin(w) / (2 * Q);
    
    b0 = 1 + alpha * A;
    b1 = -2 * cos(w);
    b2 = 1 - alpha * A;
    a0 = 1 + alpha / A;
    a1 = -2 * cos(w);
    a2 = 1 - alpha / A;
    
    b = [b0, b1, b2] / a0;
    a = [a0, a1, a2] / a0;
end

function stopPlayback(~, ~)
    global isPlaying audioReader deviceWriter playbackPos statusText
    
    if ~isempty(deviceWriter)
        release(deviceWriter);
        deviceWriter = [];
    end
    
    if ~isempty(audioReader)
        release(audioReader);
    end
    
    isPlaying = false;
    set(statusText, 'String', '?ã d?ng phát');
    
    % Stop timer
    timers = timerfindall;
    if ~isempty(timers)
        stop(timers);
        delete(timers);
    end
end

function resetEQ(~, ~)
    global bassGain midGain trebleGain
    
    fig = gcbf;
    
    % Reset gain values
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
    
    % Reset displays
    bassValue = getappdata(fig, 'bassValue');
    midValue = getappdata(fig, 'midValue');
    trebleValue = getappdata(fig, 'trebleValue');
    
    set(bassValue, 'String', '0 dB');
    set(midValue, 'String', '0 dB');
    set(trebleValue, 'String', '0 dB');
    
    % Update status
    set(statusText, 'String', '?ã reset EQ v? 0');
end

function saveAudioFile(~, ~)
    global originalAudioData fs bassGain midGain trebleGain statusText
    
    if isempty(originalAudioData)
        warndlg('Không có âm thanh ?? l?u', 'C?nh báo');
        return;
    end
    
    % Ch?n n?i l?u file
    [filename, pathname] = uiputfile({'*.wav', 'WAV Files'}, ...
                                    'L?u file âm thanh');
    
    if isequal(filename, 0)
        return;
    end
    
    fullpath = fullfile(pathname, filename);
    
    try
        % Áp d?ng EQ cho toàn b? file
        audioProcessed = originalAudioData;
        
        if bassGain ~= 0
            [b_bass, a_bass] = designBassFilter(fs, bassGain);
            audioProcessed = filter(b_bass, a_bass, audioProcessed);
        end
        if midGain ~= 0
            [b_mid, a_mid] = designMidFilter(fs, midGain);
            audioProcessed = filter(b_mid, a_mid, audioProcessed);
        end
        if trebleGain ~= 0
            [b_treble, a_treble] = designTrebleFilter(fs, trebleGain);
            audioProcessed = filter(b_treble, a_treble, audioProcessed);
        end
        
        % Normalize
        maxVal = max(abs(audioProcessed));
        if maxVal > 0.95
            audioProcessed = audioProcessed * (0.95 / maxVal);
        end
        
        % L?u file
        audiowrite(fullpath, audioProcessed, fs);
        
        % C?p nh?t status
        set(statusText, 'String', sprintf('?ã l?u: %s', filename));
        
        msgbox('File ?ã ???c l?u thành công!', 'Thành công');
        
    catch ME
        errordlg(['L?i khi l?u file: ' ME.message], 'L?i');
    end
end

function closeFigure(~, ~)
    stopPlayback();
    delete(gcbf);
end

function str = sec2str(sec)
    min = floor(sec / 60);
    sec = mod(floor(sec), 60);
    str = sprintf('%d:%02d', min, sec);
end