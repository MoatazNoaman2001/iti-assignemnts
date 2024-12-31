#include<stdio.h>
#include<string.h>
#include<math.h>


int isplindrom(char str[], int size){
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return -1;
        i++;
        j--;
    }

    return 1;
}

int main(){
    char str[1000];
    scanf("%s" , str);
    if (strlen(str) > 1000 || strlen(str) == 0) {return 0;}
    printf("%s" , isplindrom(str, strlen(str)) == 1 ? "YES" : "NO");
}