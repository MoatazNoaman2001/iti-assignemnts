#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int isPlind(int k){
    char str[32];
    itoa(k , str, 2);
    int i = 0, j= strlen(str) - 1;
    while (i < j){
        if (str[i] != str[j]){
            return 0;
        }

        i++;
        j--;
    }
    return 1;
}
void isWond(int k){
    printf("%s" , ((k % 2 != 0) && isPlind(k)) ? "YES" : "NO");
}
int main(){
    int i;
    scanf("%i" ,&i);
    isWond(i);
}