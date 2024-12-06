#include <stdio.h>
#include<stdlib.h>

int main() {
    int N, i;

    scanf("%d", &N);
    if(N > 15 || N < 1){return 0;}
    int *arr = malloc(N* sizeof(int));
    if (arr == NULL)return 0;

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 20 || arr[i] < 0) {free(arr);return 0;}
        long int fact=1;
        for (int j = 1; j <= arr[i]; j++){   
            fact *= j;
        }
        printf("%ld\n" , fact);
    }

    free(arr);
    return 0;
}
