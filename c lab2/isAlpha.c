#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
        printf("%c is an Alphabet.\n", ch);
    else
        printf("%c is not an Alphabet.\n", ch);

    return 0;
}
