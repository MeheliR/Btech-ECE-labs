clc;
clear all;
close all;
f=@(x)1/x;
a=1;
b=5;
n=4;
h=(b-a)/n;
s=f(a)+f(b);
%for odd
for i=1:2:n-1
    s=s+4*f(a+i*h);
end
%for even
for i=2:2:n-2
    s=s+2*f(a+i*h);
end
I=s*h/3;
fprintf('the req value is %.4f\n',I);