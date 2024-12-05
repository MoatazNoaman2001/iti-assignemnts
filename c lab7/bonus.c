#include<stdio.h>
#include<stdlib.h>

int* expandArr(int *arr, int oldSize, int newSize){
    int *new_arr = malloc(newSize * sizeof(int));
    for (int i =0; i< newSize; i++){
        if (oldSize > i){
            new_arr[i] = arr[i]; 
        }else{
            new_arr[i] = 0;
        }
    }
}
int main(){
    int student_num = 0;
    printf("enter number of student: ");
    scanf("%i" , &student_num);

    int **degrees = malloc(student_num * sizeof(int*));

    
    for (int i=0; i<student_num; i++){
        int sum = 0;
        int sub_num = 0;
        printf("enter number of subject: ");
        scanf("%i" , &sub_num);

        degrees[i] = malloc(sub_num * sizeof(int));

        for (int j =0; j<sub_num; j++){
            printf("enter subject(%i): ", j + 1);
            scanf("%i" , &degrees[i][j]);
        }
        for (int j =0; j<sub_num; j++){
            sum += degrees[i][j];
        }
        printf("sum(%i): %i\n" ,i +1,  sum);
    }

}