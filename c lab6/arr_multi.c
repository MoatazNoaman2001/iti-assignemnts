#include<stdio.h>

void mult(int *arr, int size){
    int i=0;
    while (i < size)
    {
        printf("%i: %i, ", i , (*arr++*10));
        i++;
    }
    
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9, 10};
    mult(a, 10);
}