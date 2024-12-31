#include<stdio.h>

int main(){
    int x, y, z;
    scanf("%i %i %i", &x, &y, &z);

    if (
        x < 1 || x > 10000 ||
        y < 1 || y > 10000 ||
        z < 1 || z > 10000 
    ) return 0;

    printf("%i" , x < y && x < z ? x : y < x && y < z ? y : z);
}