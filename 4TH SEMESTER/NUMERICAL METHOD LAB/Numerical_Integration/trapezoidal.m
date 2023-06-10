%with equation only
clc;
clear all;
close all;
f=@(x)1/x;
a=1;
b=5;
n=4;
h=(b-a)/n;
s=0.5*(f(a)+f(b));
for i=1:n-1
    s=s+f(a+i*h);
end
I=s*h;
fprintf('the req value is %5.5f \n',I);