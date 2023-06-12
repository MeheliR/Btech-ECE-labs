
%Obtain the Nyquist Plot for the transfer function using sisotool and
%writing a code in Matlab.
% T4=10/s^2+10s+9
clc;
N =[10];
D = [1 10 9];
sys = tf(N,D);
nyquist(sys),grid on;