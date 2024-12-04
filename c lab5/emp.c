#include<stdio.h>

struct Emp
{
    char name[20];
    double salary;
    int age;
};

int main(){
    struct Emp e = {"moataz" , 10000, 23};
    printf("name: ");
    scanf("%s", e.name);
    printf("salary: ");
    scanf("%lf", e.salary);
    printf("age: ");
    scanf("%i", e.age);

    printf("%s\n", e.name);  
    printf("%0.1lf\n", e.salary);  
    printf("%i\n", e.age);  
}