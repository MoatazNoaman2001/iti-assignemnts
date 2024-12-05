#include<stdio.h>
#include<stdlib.h>

int maxNum(int a , int b, int c){
    return a > b && a > c? a: b > a && b > c ? b : c; 
}
struct Birth
{
    int day, month,year;
};

struct Emp
{
    char name[20];
    double salary;
    int age;
    struct Birth birth;
};
struct Emp addEmp(struct Emp *emp){
    printf("name: ");
    scanf("%19s", emp->name);
    printf("salary: ");
    scanf("%lf", &emp->salary); 
    printf("age: ");
    scanf("%i", &emp->age); 
    printf("birth: ");
    scanf("%i %i %i", &emp->birth.day, &emp->birth.month, &emp->birth.year);
}

void displayEmps(struct Emp *e_arr,int size){
    for (int i =0; i < size; i++){
        printf("%s, %0.1lf, %i, birth: %i/%i/%i\n", e_arr[i].name, e_arr[i].salary, e_arr[i].age,  e_arr[i].birth.day, e_arr[i].birth.month, e_arr[i].birth.year);
    }
}

int main(){
    struct Emp *emps[3];

    for (int i = 0; i <3 ; i++){
        int size;
        printf("Enter the number of employees for group %d: ", i + 1);
        scanf("%i", &size);
        emps[i] = malloc(size * sizeof(struct Emp));
        for (int j = 0; j< size; j++){
            addEmp(&emps[i][j]);
        }

        printf("\nEmployees in group %d:\n", i + 1);
        displayEmps(emps[i], size);

        free(emps[i]);
    }
}