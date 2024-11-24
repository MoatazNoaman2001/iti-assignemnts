#include<stdio.h>
#include<math.h>
#define pi 3.141592653

double red(double r){
    double res = pi * pow(r , 2);
    return res;
}
int main(){
    double r;
    scanf("%lf", &r);
    printf("%.7lf", red(r));
}