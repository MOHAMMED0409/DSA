#include<stdio.h>
int e(int x, int n)
{
    static double s;
    for(;n>0;n--)
        s=1+x*s/n;
    return s;
}
int main()
{
    double x=e(2,10);
    printf("%lf",x);
    return 0;
}