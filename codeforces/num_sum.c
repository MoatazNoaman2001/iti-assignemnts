#include<stdio.h>
#include <stdlib.h>

long long num_sum(long long num){
    long long sum= 0, i = 0;
    while (i <= num)
    {
        sum = (num*(num+1))/2;
        i++;
    }
    return sum;    
}

int main(int argc, char *argv[]){
    // printf("%i, %i, %i, %i\n" , argc, sizeof(*argv), atoi(argv[0]), atoi(argv[1]));
    long long input;
    scanf("%lld" , &input);
    printf("%lld", num_sum(input));
}