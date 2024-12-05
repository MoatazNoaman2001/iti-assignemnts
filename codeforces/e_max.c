#include <stdio.h>
#include<stdlib.h>

int main() {
    int N, i;
    int max= 0;

    scanf("%d", &N);
    int *arr = malloc(N* sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (max < arr[i])
            max = arr[i];
    }

    printf("%d\n", max);

    return 0;
}
