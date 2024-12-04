#include<stdio.h>

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


void displayEmps(struct Emp *e_arr,int size){
    for (int i =0; i < size; i++){
        printf("%s, %0.1lf, %i, birth: %i/%i/%i\n", e_arr[i].name, e_arr[i].salary, e_arr[i].age,  e_arr[i].birth.day, e_arr[i].birth.month, e_arr[i].birth.year);
    }
}

int main(){
    struct Emp e_arr[10] = {
        {"moataz", 10000, 23, {22 , 7 , 2001}},
        {"alia" , 15000, 22, {28 , 9 , 2002}},
    };
    // int size = sizeof(e_arr) / sizeof(e_arr[0]);
    displayEmps(e_arr, 2);      
}