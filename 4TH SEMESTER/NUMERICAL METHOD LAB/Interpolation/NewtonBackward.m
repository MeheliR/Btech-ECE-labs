clc
clear all;
close all;
x = [1891 1901 1911 1921 1931];
y = [46 66 81 93 101];
n = length(x);
d = zeros(n-1);
h = x(2) - x(1);
x0 = input('Enter the value of x : ');
u = (x0 - x(n))/h;
for i = 2:n
    d(i-1,1) = y(i) - y(i-1);
end
for k = 2:n-1
    for i = 1:n-k
        d(i,k) = d(i+1,k-1) - d(i,k-1);
    end
end
disp('The backward difference table is :');
disp(d);
s = y(n);
t = u;
for k = 1:n-1
    s = s + t*d(n-k,k);
    t = (u+k)/(k+1)*t;
end
fprintf('The required value is f(%d)=%5.5f\n',x0,s);