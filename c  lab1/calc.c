#include<stdio.h>

int main(){
    int a, b, method;
    printf("enter a: ");
    scanf("%i", &a); 
    printf("enter b: ");
    scanf("%i", &b);
    printf("enter method: ");
    scanf("%i", &method);

    if (method == 0){
        printf("result: %i\n", a + b);
    }else if (method == 1){
        printf("result: %i\n", a - b);
    }else if (method == 2){
    printf("result: %i\n", a * b);
    }else if (method == 3){
    printf("result: %i\n", a / b);

    }else{
        printf("unknown method");
    }

    printf("%04x\n", a);

    printf("quatent: %i, remnder: %i", a/b, a%b);
}