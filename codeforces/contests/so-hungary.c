#include<stdio.h>
#include<math.h>

int main(){
    long long i,j;
    scanf("%lld %lld" , &i, &j);
    if (i < 0 || j < 0 ) return 0;

    printf("%i" , (i +j -1) / j);
}