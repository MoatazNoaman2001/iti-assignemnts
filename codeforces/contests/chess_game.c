#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    long int a[4];
    scanf("%ld %ld %ld %ld", &a[0], &a[1], &a[2], &a[3]);

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (a[i] > a[j]) {
                long int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    long int sum = a[3];
    long int AB = a[0];
    long int AC = a[1];
    long int BC = a[2];

    long int A = AB + AC - sum;
    long int B = AB + BC - sum;
    long int C = AC + BC - sum;
    printf("%ld %ld %ld\n", A, B, C);

    return 0;
}