#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int N, i;

    scanf("%d", &N);
    int *arr = malloc(N* sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        char str[10];
        itoa(arr[i] , str, 10);
        strrev(str);
        for (int k =0; k < strlen(str); k++){
            printf("%c ", str[k]);
        }
        printf("\n");
    }

    return 0;
}
