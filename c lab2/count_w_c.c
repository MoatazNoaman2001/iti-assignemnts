#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char str[] = "hello mr moataz2001";
    int charCount = 0, wordCount= 0, numCount= 0;

    for (int i = 0; i< strlen(str); i++){
        if (isalpha(str[i])){
            charCount += 1;
        }else if (isspace(str[i]) || str[i] == '\0'){
            wordCount += 1;
        }else if (isalnum(str[i])){
            numCount += 1;
        }
    }

    printf("words: %i, char: %i, nums: %i", wordCount + 1, charCount, numCount);
}