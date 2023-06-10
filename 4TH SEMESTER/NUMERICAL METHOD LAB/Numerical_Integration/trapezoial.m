%when the values are given
clc;
clear all;
close all;
x=[-4 -3 -2 -1 0 1 2 ];
y=[0 4 5 3 10 11 2];
l=length(x);
n=6;
h=((x(l)-x(1))/n);
s=0.5*(y(1)+y(l));
for i=2:l-1
    s=s+y(i);
end
I=s*h;
fprintf('the req value is %.4f\n',I);