#include<stdio.h>

int main(){
    long long a , b;
    char c;

    scanf("%lld %c %lld" , &a,&c,&b);
    if (
        (c == '<' && a < b) ||
        (c == '>' && a>b) || 
        (c == '=' && a == b)
    ){
        printf("Right");
    }else{
        printf("Wrong");
    }
}