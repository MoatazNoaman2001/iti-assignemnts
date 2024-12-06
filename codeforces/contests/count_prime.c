#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    char n[19];
    scanf("%s" , n);
    long long count = 0;
    for (long long i = 0; i < strlen(n); i++){
        int num;
        char c = n[i];
        sscanf(&c, "%d" , &num);
        if (is_prime(num) == 1){
            count++;
        }
    }

    printf("%lld" , count);
}