clc;
close all;
clear all;
%A=input('enter coefficient:');
%B=input('enter RHS value:');
A=[1 1 1;2 1 -1; -1 2 2];
B=[6;1;9];
mat=A;
aug=[A B];
for i=1:size(aug,1)
    for j=i+1:size(aug,1)
        pivot=aug(j,i)./aug(i,i);
        aug(j,:)= aug(j,:)-pivot.*aug(i,:)
    end
end
disp(aug)
X=zeros(3,1)
for i=3:-1:1
    X(i)=(aug(i,end)-aug(i,i+1:n)*X(i+1:i))/aug(i,i);
end

