#include<stdio.h>


int main(){
    printf("hello, world!\n");
    char c = 'a';
    printf("char: %i\n", c);
    float f;
    printf("enter a float value: ");
    scanf("%f", &f);
    printf("float f: %f\n", f);
    int a, b;
    printf("enter a: ");
    scanf("%i", &a); 
    printf("enter b: ");
    scanf("%i", &b);

    printf("result: %i\n", a + b);

}