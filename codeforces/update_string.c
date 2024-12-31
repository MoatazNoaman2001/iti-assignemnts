#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int isVowel(char i){
    return 
    i != 'a' && 
    i != 'e' &&
    i != 'o' &&
    i != 'u' &&
    i != 'i' ? 0 : 1;
}

int main(){
    char str[10000];
    scanf("%s" , str);
    if (strlen(str) < 0 || strlen(str) > pow(10 , 4)) return 0;
    char *str2 = malloc(strlen(str));
    int p = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (i > 0 & i + 1 < strlen(str) && isVowel(str[i]) == 1 && isVowel(str[i -1])  == 0 && isVowel(str[i + 1]) == 0) {
            
        }else{
            str2[p++] = str[i];
        }
    }
    str2[p] = '\0';
    printf("%s\n", str2);
}