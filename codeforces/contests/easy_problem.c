#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long n;
    scanf("%ld" , &n);
    if (n < 0 || n > pow(10 , 5)) return 0;
    long long *arr = malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++){
        scanf("%lld" , &arr[i]);
        if (arr[i] < -1000000000 || arr[i] > 1000000000) return 0;
    }

    long long least_pos =arr[n - 1];
    for (int i = n -2 ; i >= 0;i--){
        if (arr[i] <= 0) {
            arr[i] = least_pos;
        } else if (arr[i] > 0 && arr[i] < least_pos) {
            least_pos = arr[i];
        }
    }

    for (int i=0; i< n;i++){
        printf("%lld " , arr[i]);
    }
}