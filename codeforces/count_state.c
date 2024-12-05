#include <stdio.h>
#include<stdlib.h>

int main() {
    int N, i;
    int even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d", &N);
    int *arr = malloc(N* sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
