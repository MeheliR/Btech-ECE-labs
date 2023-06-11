%Experiment 1 DSP Lab
N=input('length of sequence :')
n=0:N-1
yn1=[1,ones(1,(N-1))]         %unit step sequence
subplot(4,1,1)
stem(n,yn1)
title('unit step sequence')
xlabel('sample')
%ylable('unit step')

yn2=[1,zeros(1,(N-1))]         %unit impulse sequence
subplot(4,1,2)
stem(n,yn2)
title('unit impulse sequence')
xlabel('sample')
%ylable('yn2')

yn3=n                         %unit ramp sequence
subplot(4,1,3)
stem(n,yn3)
title('unit ramp sequence')
xlabel('sample')
%ylable('yn3')

f=0.1
yn4=sin(2*pi*f*n)        %sinusoidal sequence
subplot(4,1,4)
stem(n,yn4)
title('sinusoidal sequence')
xlabel('sample')
%ylable('yn4')

%Exponential sequence
figure
a1=3
a2=0.5
a3=-0.7
a4=-2

yn5=a1.^n
subplot(2,2,1)
stem(n,yn5)
title('exponential sequence for a>0')
xlabel('sample')

yn6=a2.^n
subplot(2,2,2)
stem(n,yn6)
title('exponential sequence for 1>a>0')
xlabel('sample')

yn7=a3.^n
subplot(2,2,3)
stem(n,yn7)
title('exponential sequence for -1<a<0')
xlabel('sample')

yn8=a4.^n
subplot(2,2,4)
stem(n,yn8)
title('exponential sequence for a<-1')
xlabel('sample')