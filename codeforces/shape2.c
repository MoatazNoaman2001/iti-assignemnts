#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int N;

    scanf("%d", &N);
    if (N > 99 || N < 1) return 0;

    for (int i = N , k = 1; i > 0; i-- , k+=2){
        for (int l = 1; l < i; l++){
            printf(" ");
        }
        for (int l = 0; l < k; l++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
