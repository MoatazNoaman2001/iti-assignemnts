#include<stdio.h>
#include<ctype.h>

int main(){

    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i =  0 ; i <= size; i++){
        printf("enter value[%i]: ", i);
        scanf("%i" , &arr[i]);
    }

    int largest = -1;
    for (int i =  0 ; i <= size; i++){
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("largest item: %i", largest);
}