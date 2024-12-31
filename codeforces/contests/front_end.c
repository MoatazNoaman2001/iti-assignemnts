#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    long int t;
    scanf("%ld" , &t);
    if (t < 1 || t > pow(10 , 5))return 0;
    long long *arr = malloc(t * sizeof(long long));
    
    for (int i=0; i < t; i ++){
        scanf("%lld" , &arr[i]);
        if (arr[i] < -1000000000  || arr[i] > pow(10 , 9))return 0;
    }

    int i=0, j = t - 1;
    while (i <= j)
    {
        if (i == j) {
            printf("%lld", arr[i]);
        } else {
            printf("%lld %lld ", arr[i], arr[j]);
        }
        i++;
        j--;
    }
}