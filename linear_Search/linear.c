#include<stdio.h>
struct Array{
    int A[10];
    int size;
    int length;
};
int swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int linear_search(struct Array *arr,int key){
    for(int i=0;i<(*arr).length;i++){
        if(key == (*arr).A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}


int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n",linear_search(&arr,6));
    return 0;
}