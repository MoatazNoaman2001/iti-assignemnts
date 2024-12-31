#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n, m;
    scanf("%i %i" , &n, &m);

    if (
        n < 2 || n > pow(10 , 5)||
        m < 2 || m > pow(10 , 5)
    )return 0;

    long long *arr = malloc(n * sizeof(long long));
    for (int i = 0; i < n; i ++){
        scanf("%lld"  , &arr[i]);
        if (arr[i] < 0 || arr[i] > pow(10 , 9)) return 0; 
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        if (i %2 ==0){
            sum += arr[i];
        }else{
            sum -= arr[i];
        }
    }

    for (int i=0; i < m;i ++){
        int o ,p;
        scanf("%i %i" , &o, &p);
        o--;
        p--;
        if (o % 2 == 0) {
            sum -= arr[o];
        } else {
            sum += arr[o];
        }
        if (p % 2 == 0) {
            sum -= arr[p];
        } else {
            sum += arr[p];
        }

        long long temp = arr[o];
        arr[o] = arr[p];
        arr[p] = temp;
        
        if (o % 2 == 0) {
            sum += arr[o];
        } else {
            sum -= arr[o];
        }
        if (p % 2 == 0) {
            sum += arr[p];
        } else {
            sum -= arr[p];
        }

        printf("%lld\n" , sum);
    }
}