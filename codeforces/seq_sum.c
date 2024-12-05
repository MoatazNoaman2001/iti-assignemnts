#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
    long long N , I;
    while (scanf("%lld %lld", &N , &I) != EOF)
    {
        if (N > 100 || N <= 0){return 0;}
        if (I > 100 || I <= 0){return 0;}
        int sum =0;
        for (int i = (N>I?I:N); i <= (N<I?I:N); i++){
            printf("%i ", i);
            sum += i;
        }
        printf("sum =%i\n" , sum);
    }
    
   
    return 0;
}
