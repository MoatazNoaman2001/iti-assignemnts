#include<stdio.h>
#include<math.h>

int main(){
    long long n ,x;
    scanf("%lld %lld", &n , &x);
    if (n > pow(10, 5) || n < pow(-10, 5) || x > pow(10, 5) || x < pow(-10, 5)){return 0;}
    if (n > x) {
        long long temp =n ;
        n = x;
        x = temp;
    }
    long long sum = 0;
    for (long long k = n; k <= x ; k++){
        if (k%2 != 0) {sum+=k;}
    }

    printf("%lld" , sum);
}