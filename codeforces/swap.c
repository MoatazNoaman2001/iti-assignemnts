#include<stdio.h>

void swap(int *k , int *y){
    int temp = *k;
    *k = *y;
    *y = temp;
}
int main(){
    int i , u;
    scanf("%i %i" ,&i , &u);
    swap(&i , &u);
    printf("%i %i" , i , u);
}