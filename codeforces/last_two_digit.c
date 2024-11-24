#include<stdio.h>

long long getLastTwoDegeit (long long a,long long b,long long c,long long d){
    long long g = a*b*c*d;
    long long result = a % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;
    return result;
}
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    printf("%02lld", getLastTwoDegeit(a, b, c, d));
}