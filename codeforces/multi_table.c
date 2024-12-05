#include <stdio.h>
#include<stdlib.h>

int main() {
    int N;
    scanf("%i" , &N);

    for (int i = 1; i < 13; i++){
        printf("%i * %i = %i\n" , N , i , N*i);
    }

    return 0;
}
