#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%i" , &n);
    if( n< 0 || n > 100) return 0;
    char *str = malloc(n + 1);
    char *str2 = malloc(n + 1);

    scanf("%s" , str);
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != '.') {
            str2[p++] = str[i];
        }
    }
    str2[p] = '\0';
    if (p == 0) {
        printf("Null\n");
    } else {
        printf("%s\n", str2);
    }
}