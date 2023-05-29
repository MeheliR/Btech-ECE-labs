%Simulation of step response for Type-I system with feedback using MATLAB.
% T(s)=10/s(s+2)(s+4)
%transfer function can be defined
clc;
z = [ ]; %initializes an empty vector for the zeros of the transfer function.
p = [0 -2 -4]; %defines the pole locations of the transfer function.
k = [10]; %sets the gain of the transfer function
G3 = zpk(z,p,k); %creates a transfer function model using the zeros, poles, and gain.
%feedback path of the transfer function
nm = [1];
dm =[1];
H3 = tf(nm,dm);
%feedback of the system
sys1= feedback(G3,H3);
subplot(2,1,1),step(sys1),title('STEP RESPONSE'),grid on;
subplot(2,1,2),impulse(sys1),title('IMPULSE RESPONSE'),grid on;
