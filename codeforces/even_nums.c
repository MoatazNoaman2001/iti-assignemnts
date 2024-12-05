#include<stdio.h>

int main(){
    long long x;
    scanf("%lld" , &x);
    long long found = 0;
    for (long long i= 2; i<= x; i+=2){
        found = 1;
        printf("%lld\n", i);
    }
    if (found != 1){
        printf("%i" , -1);
    }
    return 0;
}