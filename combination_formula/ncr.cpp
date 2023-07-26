#include<stdio.h>

int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}

int ncr(int n,int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}

int rec_ncr(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    return rec_ncr(n-1,r-1)+rec_ncr(n-1,r);
}

int main(){
    // printf("%d",ncr(5,1));
    printf("%d",rec_ncr(5,3));
}