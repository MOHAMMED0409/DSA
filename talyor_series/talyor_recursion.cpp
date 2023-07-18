#include<stdio.h>
int e(int x, int n)
{
    static double s;
    if(n==0)
        return s;
    s=1+(x*s/n);
    return e(x,n-1);
}
int main()
{
    double x=e(2,10);
    printf("%lf",x);
    return 0;
}