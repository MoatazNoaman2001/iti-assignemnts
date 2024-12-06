#include<stdio.h>
#include <ctype.h>

int isAllEnglish(const char *str) {
    while (*str) {
        if (!isalpha(*str) && !isspace(*str) && !ispunct(*str) && !isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}
int main(){
    char str[101];
    scanf("%s", str);
    if (isAllEnglish(str) == 1)
    printf("%seow", str);

    return 0;
}