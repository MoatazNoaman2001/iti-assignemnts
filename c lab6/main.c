#include<stdio.h>
#include<windows.h>


int main(){
    int x = 0;
    scanf("%i" , &x);
    int *p = &x;
    // x = 78;
    // printf("%i %p" , x, (void *)&x);
    while (1)
    {
        // printf("%i %p\n" , x, p++);
            printf("%i %p\n" , x, &x);

          Sleep(1000);
    }
    
}