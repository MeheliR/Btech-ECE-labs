
clc;
clear all;
close all;

x=5  % shows the value
x=5;   %subpress the output
a=[1,2,3;4,5,6;7,8,9]   %matrix of 3x3
b=[1;2;3]   %row matrix
z=[11 22 33; 44 55 66; 77 88 99]  %matrix of 3x3
c=[1 2 3]   %column matrix
d=1:2:10   %shows no. 1-10 with 2 increment
t=10:-2:1  %shows no. 10-1 with 2 decrement
e=inv(a)
f=transpose(a)
g=c'  %transpose of matrix
h=[a b] %cloumn addition
j=horzcat(a,b) %column addition
i=[a;z]      %row addition
k=vertcat(a,z)  %row addition
l=a(:,3) %all elements of 3rd column  (row,column)
m=a(2,:)  %all elements of 2nd row    (row,column)
a(2,3)=100  %for changing any particular element of the matrix
n=a(1:3,2:3) %1st-3rd row,2nd-3rd column
o=k(1:2:3,1:2)
p=k(1:3:6,1:2:3)
q=zeros(3,3)   % all the elements will be zero in the matrix
 % r=ones(2,2)  all the elements will be one
 r=eye(3,3)     % diagonal elements like (1,1) (2,2) (3,3) are one
Y=randi([1,100],4,5)    %generate a matrix with random variables
ascending=sort(Y)
descending=sort(Y,'descend')
sortrows(Y) %sorting the matrix
%trigonametric functions
s=pi/4
sin(s)
cos(s)
tan(s)
cot(s)
sec(s)
csc(s)
square_mat=sqrt(a)  %squareroot of matrix
new_mat=a([2,3,2,3],:)  %printing 2nd and 3rd row twice
new_mat1=a(:,[2,3,2,3])  %printing 2nd and 3rd column twice
col_vec=c(:)  %row vector to column vector
col_vec2=c'   %row vector to column vector
row_vector=b'  %column to row



