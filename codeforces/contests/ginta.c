#include<stdio.h>
#include<ctype.h>
#include<string.h>

int getWidth(char c){
    switch (c)
    {
    case 'A':
        return 1;
        break;
    case 'B':
        return 2;
        break;
    case 'C':
        return 3;
        break;
    case 'D':
        return 4;
        break;
    case 'E':
        return 5;
        break;
    case 'F':
        return 6;
        break;
    case 'G':
        return 7;
        break;
    case 'H':
        return 8;
        break;
    
    default:
        break;
    }
}

int main(){
    char input[2];
    scanf("%s" , input);
    if (isalpha(input[0]) && isupper(input[0]) && isdigit(input[1]) && strlen(input)){
        int row = getWidth(input[0]);
        if ( (row%2 != 0 && input[1]%2 != 0) || (row%2 == 0 && input[1]%2 == 0) ){
            printf("Black square");
        }else{
            printf("White square");
        }
    }

    return 0;
}