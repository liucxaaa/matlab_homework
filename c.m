fun = @ (x)x * log(sqrt(x^2-1)+x)-sqrt(x^2-1)-0.5*x;
ans = fzero(fun,[1.00000001,200])