#include <stdio.h>
#include<stdlib.h>

int main() {
    int N, i;

    scanf("%d", &N);
    int *arr = malloc(N* sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        int fact=1;
        for (int j = 1; j < arr[i] + 1; j++){
            fact *= j;
        }
        printf("%d\n" , fact);
    }
    return 0;
}
