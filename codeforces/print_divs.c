#include <stdio.h>
#include<math.h>

int main() {
    long long N;

    scanf("%lld", &N);
    if (N > 10000){return 0;}
    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            printf("%i\n", i);
        }
    }
    return 0;
}
