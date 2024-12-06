#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    long n;
    scanf("%ld" , &n);
    if (n < 1 || n > pow(10 , 5)){return 0;}
    int *m = malloc(n * sizeof(int));

    int max = 0, current = 0;

    for (long i = 0; i < n; i++) {
        scanf("%d", &m[i]);

        if (m[i] > 0) {
            current++;
            if (current>max) {
                max = current;
            }
        } else {
            current = 0;
        }
    }

    free(m);

    if (max > 0) {
        printf("%d\n", max);
    } else {
        printf("Bad Luck\n");
    }
}