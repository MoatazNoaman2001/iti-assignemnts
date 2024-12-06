#include<stdio.h>

int main(){
    int x;
    scanf("%d" , &x);
    if (x > 1000 || x < 1) {return 0;}
    int found = 0;
    for (int i= 2; i<= x; i+=2){
        found = 1;
        printf("%d\n", i);
    }
    if (found != 1){
        printf("%i" , -1);
    }
    return 0;
}