function y0=langrange_interp(x,y,x0)
y0=0;
n=length(x);
for j=1:n
    t=1;
    for i=1:n
        if i~=j
            t=t*(x0-x(i))/(x(j)-x(i));
        end
    end
    y0=y0+t*y(j);
end