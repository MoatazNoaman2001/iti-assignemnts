#include<stdio.h>
#include<ctype.h>

int main(){

    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];

    int size = sizeof(arr) / sizeof(arr[0]);
    int num_of_items = sizeof(arr) / sizeof(arr[0][0]);
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

    int sum = 0, avg= 0;

    for (int i =  0 ; i < size; i++){
        for (int j =  0 ; j < size; j++){
            sum += arr2[i][j] + arr[i][j]; 
        }
    }

    avg= sum / num_of_items;
    printf("sum: %i, avg: %i" , sum, avg);
}