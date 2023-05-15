%Observe the unit step response of the second order transfer function G1(s)
%written below using MATLAB.By observing the time domain response, proof
%that the transfer function is of an under damped control system. For
%G1(s)=1/s^2+0.6s+1.For this syatem if e=0, then observe the unit step
%response by the code.
clc;
N = [1];
D1 = [1 0.6 1];
%transfer function system 1
sys1=tf(N,D1);
D2 = [1 10 1];
%transfer function system 2
sys2=tf(N,D2);
subplot(211),step(sys1),title('UNDER DAMPED'),grid on;
subplot(212),step(sys2),title('UNDAMPED'),grid on;
