#include<stdio.h>

struct Emp
{
    char name[20];
    double salary;
    int age;
};

void displayEmps(struct Emp *e_arr,int size){
    for (int i =0; i < size; i++){
        printf("%s, %0.1lf, %i\n", e_arr[i].name, e_arr[i].salary, e_arr[i].age);
    }
}

int main(){
    struct Emp e_arr[10] = {
        {"moataz", 10000, 23},
        {"alia" , 15000, 22},
    };
    // int size = sizeof(e_arr) / sizeof(e_arr[0]);
    displayEmps(e_arr, 2);    
}