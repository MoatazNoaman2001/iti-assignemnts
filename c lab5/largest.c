#include<stdio.h>

int maxNum(int a , int b, int c){
    return a > b && a > c? a: b > a && b > c ? b : c; 
}

int main(){
    printf("%i" , maxNum(4 , 5 ,6));
}