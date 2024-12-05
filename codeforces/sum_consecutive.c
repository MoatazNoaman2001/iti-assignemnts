#include <stdio.h>
#include<stdlib.h>

int main() {
    int N;

    scanf("%d", &N);
    if (N > 10 || N < 1) return 0;
    int i = 0;
    while (i < N)
    {
        long int *arr = malloc(N* sizeof(long int));
        scanf("%ld %ld", &arr[0] , &arr[1]);
        long int sum = 0;
        for (long int k = (arr[0] > arr[1]? arr[1] : arr[0]) + 1; k < (arr[0] < arr[1]? arr[1] : arr[0]); k++ ){
            if (k %2 != 0){
                sum += k;
            }
        }

        printf("%ld\n", sum);
        i++;
    }
    

    return 0;
}
