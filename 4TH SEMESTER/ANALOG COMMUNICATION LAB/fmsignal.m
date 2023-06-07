clc;
clear all;
close all;
am=input('am=');
ac=input('ac=');
fm=input('fm=');
fc=input('fc=');
b=input('modulation index=');
t=0:pi/1000:2*pi;
%message signal
m=cos(2*pi*fm*t);
subplot(311);
plot(t,m);
title('message signal');
%carrier signal
c=cos(2*pi*fc*t);
subplot(312);
plot(t,c);
title('carrier signal');
% frequency modulated signal
FM=ac*cos((2*pi*fc*t)+b*sin(2*pi*fm*t));
subplot(313);
plot(t,fm);
title('frequency modulated signal');