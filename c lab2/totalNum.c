#include <stdio.h>

int main() {
    int num, sum = 0;

    while (sum < 100) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    }

    printf("Total reached 100! Sum = %d\n", sum);

    return 0;
}
