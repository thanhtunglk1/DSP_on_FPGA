% Các tham s?
A = 2;          % Biên ??
f = 5;          % T?n s? (Hz)
phi = 0;        % Pha ban ??u (radian)
fs = 128;      % T?n s? l?y m?u
T = 0.5;          % Th?i gian t?ng (giây)

% T?o vector th?i gian
t = 0:1/fs:T;

% T?o sóng sin: y = A*sin(2?ft + ?)
y = A * sin(2*pi*f*t + phi);

% V? ?? th?
plot(t, y);
xlabel('Time');
ylabel('Amplitude');
title('Sine Wave');
grid on;