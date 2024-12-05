#include <stdio.h>
#include<stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N -1; i >= 0; i--){
        for (int k = 0; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
