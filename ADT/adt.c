#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
int main(){
    struct Array arr;
    int n,i;
    printf("Enter Array Size:");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter the digits:");
    scanf("%d",&n);

    printf("Enter Elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr.A[i]);

    arr.length=n;
    display(arr);
    
    return 0;
}