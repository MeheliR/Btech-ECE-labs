clc;
clear all;
close all;
x=[0 0.001 0.002 0.003 0.004 0.005]
y=[1.121 1.123 1.1255 1.127 1.128 1.1285]
n=length(x);
d=zeros(n-1);
h=x(2)-x(1);
x0=input ('enter the value of x where we want to find the value of f(x):');
u=(x0-x(1))/h;
for i=2:n
    d(i-1,1)=y(i)-y(i-1);
end
for k=2:n-1
    for i=1:n-k
        d(i,k)=d(i+1,k-1)-d(i,k-1);
    end
end
disp('The forward difference table is :');
disp(d);
s=y(1),t=u;
for k=1:n-1;
    s=s+t*d(1,k);
    t=(u-k)/(k+1)*t;
end
fprintf('The required value is f(%d)=%5.5f',x0,s);
