%Plotting a transfer function
clc;
N = [1];
D = [1 0.6 1];
sys=tf(N,D);
step(sys),grid on;