#include<stdio.h>
#include<stdlib.h>


int main(){
    int a , b;
    scanf("%i %i", &a, &b);

    int *arr = malloc(a +1 * sizeof(int));
    int *count = malloc(b +1 * sizeof(int));
    for (int i = 1; i <= b; i++){
        count[i] = 0;
    }

    for (int i = 0; i < a; i ++){
        scanf("%i", &arr[i]);

        if (arr[i] < b){
            count[arr[i] + 1]++;
        }
    }

    
    for (int i = 1; i <= b; i++){
        printf("%i\n" , count[i]);
    }

}