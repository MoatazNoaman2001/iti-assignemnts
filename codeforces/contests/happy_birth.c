#include<stdio.h>

int main(){
    long long n;
    scanf("%lld" , &n);
    if (n < 1 || n > 1000000000) {return 0;}
    switch (n %7)
    {
    case 0:
        printf("Happy Birthday, Eng Bahaa!");
        break;
    case 1:
        printf("Happy Birthday, Khalil!");
        break;
    case 2:
        printf("Happy Birthday, Maivy!");
        break;
    case 3:
        printf("Happy Birthday, Mamdooh!");
        break;
    case 4:
        printf("Happy Birthday, Omar!");
        break;
    case 5:
        printf("Happy Birthday, Amr!"); 
        break;
    case 6:
        printf("Happy Birthday, Yousef!");
        break;
    default:
        break;
    }
}