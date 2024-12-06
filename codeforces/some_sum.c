#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    if (N > 10000 || N < 1){return 0;}
    if ((A > 36 || A < 1) || (B > 36 || B < 1)) {return 0; }

    int total_sum = 0;

    for (int i = 1; i <= N; i++) {
        int digit_sum = sum_of_digits(i);
        if (digit_sum >= A && digit_sum <= B) {
            total_sum += i;
        }
    }

    printf("%d\n", total_sum);
    return 0;
}