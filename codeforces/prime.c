#include <stdio.h>
#include<math.h>

int is_prime(long long n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long long N;

    scanf("%lld", &N);
    if (is_prime(N)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
