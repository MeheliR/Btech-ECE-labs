clc;
clear all;
close all;
x=input('enter the values of x:');
y=input('enter the values of y:');
n=lenght(x);
d=zeros(x-1);
h=x(2)-x(1);
x0=input('enter the req value of x for which y will be calculated:');
u=x0-x(1)/h;
for i=2:n
    d(i-1,1)=y(i)-y(i-1);
end
for k=2:n-1
    for i=2:n-k
        d(i,k)=d(i+1,k-1)-d(i,k-1);
    end
end
disp('the differential table:');
disp(d)
s=y(1),t=u;
for k=1:n-1
    s=s+t*d(1,k);
    t=(u-k)/(k+1)*t;
end
fprintf('the req value of f(%d)=%5.5f',x0,s);