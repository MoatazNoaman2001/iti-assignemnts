#include<stdio.h>
#include<math.h>

int main(){
    long long n, count=0;
    scanf("%lld" , &n);
    if (n < 1 || n > pow(10 , 12)) return 0;
    count = n - (n / 7);
    printf("%lld" , count);
}