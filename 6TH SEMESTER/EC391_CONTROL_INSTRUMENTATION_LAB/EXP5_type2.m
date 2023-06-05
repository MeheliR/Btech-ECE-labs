%Simulation of step response for Type-II system with feedback using MATLAB.
% T(s)=10(s+1)/s^2(s+4)
%transfer function can be defined
clc;
z = [-1]
p = [0 0 -4]
k = [10]
G3 = zpk(z,p,k)
%feedback path of the transfer function
%nm =[1]
%dm =[1]
H3 =tf(1,1) %H3 =tf(nm,dm)
%feedback of the system
sys1 =feedback(G3,H3);
subplot(211),step(sys1),title('STEP RESPONSE'),grid on;
subplot(2,1,2),impulse(sys1),title('IMPULSE RESPONSE'),grid on;