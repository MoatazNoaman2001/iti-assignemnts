#include<stdio.h>

int main(){
    double a, b;
    scanf("%lf %lf" , &a, &b);
    if (a == 0 && b == 0){
        printf("Origem");
    }else if (a == 0){
        printf("Eixo Y");
    } else if (b ==0){
        printf("Eixo X");
    }else if (a > 0 && b> 0){
        printf("Q1");
    }else if (a > 0 && b < 0){
        printf("Q4");
    }else if (a < 0 && b < 0){
        printf("Q3");
    }else {
        printf("Q2");
    }
}