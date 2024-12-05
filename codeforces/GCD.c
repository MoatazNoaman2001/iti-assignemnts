#include <stdio.h>
#include<math.h>

int main() {
    long long N , I;

    int gcd = 0;
    scanf("%lld %lld", &N , &I);
    if (N > 10000){return 0;}
    for (int i = 1; i <= (N<I?N:I); i++){
        if (N % i == 0 && I % i == 0 ){
            gcd = i;
        }
    }
    printf("%d", gcd);
    return 0;
}
