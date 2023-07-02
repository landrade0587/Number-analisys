function p = interpolacion_lagrange(fun,a,b);
syms x
f=inline(fun);
xn=a:b;
yn=(f(xn));
n=length(xn-1);
plot(xn,yn,'r*');
p=0;
for i=1:n
    l=1;
    for j=1:n
        if j~=i
            l=l*(x-xn(j))/(xn(i)-xn(j));
        end
    end
    p=p+yn(i)*l;
end
p=simplify(p)
pretty(p);
end

