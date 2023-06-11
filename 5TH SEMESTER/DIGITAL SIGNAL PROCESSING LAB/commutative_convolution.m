%verification of convolution property 
%commutative property
xn=[3 11 7 0 -1 4 2]
xs=-2
xe=4
nx=xs:xe
subplot(4,1,1)
stem(nx,xn)
title('input signal')
xlabel('nx')
ylabel('xn')

hn=[2 3 0 -5 2 1]
hs=-2
he=4
nh=hs:he
subplot(4,1,2)
stem(nh,hn)
title('impulse response')
xlabel('nh')
ylabel('hn')

y1=conv(xn,hn)
y2=conv(hn,xn)
ys=xs+hs
ye=xe+he
ny=ys:ye
subplot(4,1,3)
stem(ny,y1)
title('conv signal')
xlabel('ny')
ylabel('y1')
subplot(4,1,4)
stem(ny,y2)
title('conv signal')
xlabel('ny')
ylabel('y2')
if y1==y2
    fprintf('same graph proved')
else
    fprintf('not')
end
    


t