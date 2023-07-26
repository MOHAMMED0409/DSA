#include<stdio.h>

int fib(int n){
    int t0=0,t1=1,s=0,i;
    if(n<=1)
        return n;
    return fib(n-2)+fib(n-1);
}

int main(){;
    printf("%d",fib(15));
}