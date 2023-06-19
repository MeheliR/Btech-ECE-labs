%Findout the root locus and values of the poles for the following transfer function
%(s+1)/(s^4+3s^3+2s^2+4)
%using sisotool and write the code in MATLAB.
clc;
N =[1,1];
D =[1 3 2 0 4];
sys = tf(N,D);
%plot the root locus
rlocus(sys);
%use rlocfind to find the gain and poles
[k,poles] = rlocfind(sys);
%print the results
disp('Gain is :');
disp(k);
disp('The poles are:');
disp(poles);
