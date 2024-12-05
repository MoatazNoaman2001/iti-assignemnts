#include<stdio.h>

void displaySum(int k , int i){
    printf("%i" , k + i);
}
int main(){
    int k , i;
    scanf("%i %i" , &k, &i);
    displaySum(i , k);
}