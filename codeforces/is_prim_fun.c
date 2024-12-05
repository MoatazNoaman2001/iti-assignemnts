#include <stdio.h>
#include<stdlib.h>
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
    int N, i;

    scanf("%d", &N);
    int *arr = malloc(N* sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        int res = is_prime(arr[i]);
        if (res == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

    return 0;
}
