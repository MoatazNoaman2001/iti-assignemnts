#include <stdio.h>
#include<stdlib.h>

void printMaxAndMin(long * arr, long size){
    long max = 0, min = arr[0];
    for (int i = 0; i < size; i++){
        if (max < arr[i]){
            max = arr[i];
        }else if (min > arr[i]){
            min = arr[i];
        }
    }

    printf("%ld %ld" , min ,max);
}

int main() {
    long N, i;

    if (N > 1 && N < 1000 ) return 0;
    if (i > 0 && i < 100000 ) return 0;

    scanf("%ld", &N);
    long *arr = malloc(N* sizeof(long));

    for (i = 0; i < N; i++) {
        scanf("%ld", &arr[i]);
    }
    printMaxAndMin(arr, N);
    return 0;
}
