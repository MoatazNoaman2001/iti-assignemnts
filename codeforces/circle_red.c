#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    double pi = 3.14159;
    double R;
    scanf("%lf" , &R);
    double A =  pi * pow(R , 2);
    char str[8];
    snprintf(str, 8 ,"%0.2f", A);
    printf("%s",str);
}
