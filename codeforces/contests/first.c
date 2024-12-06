#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    long long n ;
    scanf("%lld" , &n);
    if (n < 1 || n > pow(10 , 15)){return 0;}
    int first = 0;
    while (n != 0)
    {
        first = n%10;
        n = n/10;
    }
    printf("%i" , first);    
}