#include <stdio.h>
#include<string.h>
#include<stdlib.h>

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

int main() {
    char str[10];
    scanf("%s", str);
    printf("%i\n" , atoi(strrev(str)));
    printf("%s\n" , isplindrom(str, strlen(str)) == 1? "YES" : "NO");
    return 0;
}
