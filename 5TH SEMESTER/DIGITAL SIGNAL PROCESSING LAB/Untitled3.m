clc;
clear all;
close all;

%continue
a=10;
while a<20
    if a==15
        a=a+1;
        continue
    end
    fprintf('value of a:%d\n',a);
    a=a+1;
end

%break
c=10;
while(c<20)
    fprintf('value of c:%d\n',c);
    c=c+1;
    if(c>15)
        break;
    end
end

%take b=10 and print all values between 10 to 20 using for-loop
b=input('enter th value:');
for i=b:1:20
    fprintf('value of b is %d\n',i);
end
%take d=10 and print all values between 10 to 20 using while-loop
d=10;
while d<20
    disp(d)
    d=d+1;
end