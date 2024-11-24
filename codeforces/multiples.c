#include<stdio.h>

int main(){
    long long a , b;
    scanf("%lld %lld" , &a, &b);
    if ((a > b && a % b ==0 )|| (a < b && b % a ==0 ) || a == b){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
}