#include <stdio.h>
#include<stdlib.h>

int main() {
    char o;
    int N, i;

    scanf("%c", &o);
    scanf("%d", &N);
    int *arr = malloc(N* sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        for (int l = 0 ; l < arr[i]; l++){
            printf("%c" , o);
        }
        printf("\n");
    }

    return 0;
}
