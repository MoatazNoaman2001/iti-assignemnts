#include<stdio.h>
#include<ctype.h>

int main(){

    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size: %i" , size);

    for (int i =  0 ; i < size; i++){
        for (int j =  0 ; j < size; j++){
            printf("enter arr1 value[%i][%i]: ", i, j);
            scanf("%i" , &arr[i][j]);
        }
    }
    for (int i =  0 ; i < size; i++){
        for (int j =  0 ; j < size; j++){
            printf("enter arr2 value[%i][%i]: ", i, j);
            scanf("%i" , &arr2[i][j]);
        }
    }


    for (int i =  0 ; i < size; i++){
        for (int j =  0 ; j < size; j++){
            arr3[i][j] = arr2[i][j] + arr[i][j]; 
        }
    }


    
    for (int i =  0 ; i < size; i++){
        for (int j =  0 ; j < size; j++){
            printf("%i, ", arr3[i][j]);
        }
        printf("\n");
    }
}