#include<stdio.h>

void printN(int k){
    for (int i = 1; i < k; i ++){
        printf("%i ", i);
    }
    printf("%i" , k);
}
int main(){
    int i;
    scanf("%i" ,&i);
    printN(i);
}