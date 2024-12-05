#include <stdio.h>
#include<stdlib.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF)
    {
        if (N == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    

    return 0;
}
