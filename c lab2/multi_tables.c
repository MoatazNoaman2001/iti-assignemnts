#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, num, i * num);
    }

    return 0;
}
