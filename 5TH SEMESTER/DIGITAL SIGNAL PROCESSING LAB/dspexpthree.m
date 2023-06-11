%convolution dspexp3
%clc
%clear all
%close all

xn =[3 11 7 0 -1 4 2]
xs=-2
xe=4
nx=xs:xe
subplot(3,1,1)
stem (nx,xn)
title('input signal')
xlabel('nx')
ylabel('xn')

hn=[2 3 0 -5 2 1]
hs=-1
he=4
nh=hs:he
subplot(3,1,2)
stem(nh,hn)
title('impulse response')
xlabel('nh')
ylabel('hn')

yn=conv(xn,hn)
ys=xs+hs
ye=xe+he
ny=ys:ye
subplot(3,1,3)
stem(ny,yn)
title('convolution signal')
xlabel('ny')
ylabel('yn')
