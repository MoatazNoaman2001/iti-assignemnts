#include<stdio.h>
#include<stdlib.h>

int main(){
    int student_num = 0;
    printf("enter number of student: ");
    scanf("%i" , &student_num);

    int sub_num = 0;
    printf("enter number of subject: ");
    scanf("%i" , &sub_num);
    
    int **degrees = malloc(student_num * sizeof(int*));

    int *avgs = malloc(sub_num * sizeof(int));
    for (int i = 0; i< sub_num; i++){
        avgs[i] = 0;
    }

    for (int i=0; i<student_num; i++){
        int sum = 0;
        degrees[i] = malloc(sub_num * sizeof(int));
        for (int j =0; j<sub_num; j++){
            printf("enter subject(%i): ", j + 1);
            scanf("%i" , &degrees[i][j]);
        }
        for (int j =0; j<sub_num; j++){
            sum += degrees[i][j];
            avgs[j] += degrees[i][j];
        }
        printf("sum(%i): %i\n" ,i +1,  sum);
    }
    
    for (int i=0; i<sub_num; i++){
        double a =avgs[i] / student_num;
        printf("avg(%i): %0.2lf\n" , i+ 1, a);
    }
}