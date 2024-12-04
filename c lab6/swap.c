#include<stdio.h>

void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4;
    int b = 8;
    printf("before(a: %i, b: %i)", a, b);
    swap(&a, &b);
    printf("after(a: %i, b: %i)", a, b);
}