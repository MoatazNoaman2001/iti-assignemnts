#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    scanf("%i" , &n);
    if (n<1 || n > 100) {return 0;}

    for (int i; i < n; i ++){
        char str[100005];
        scanf("%s" , str);
        if (strlen(str) > pow(10 , 5) || strlen(str) == 0){return 0;}
        char sub[] = "010";
        char sub2[] = "101";
        int found  = 0;
        if (strlen(str) < 3){
            printf("Bad\n");
            continue;
        }
        for (int k=0; k < strlen(str) - 2; k++){
            if (sub[0] == str[k] && sub[1] == str[k +1] && sub[2] == str[k + 2]){
                found = 1;
                printf("Good\n");
                break;
            }else if (sub2[0] == str[k] && sub2[1] == str[k +1] && sub2[2] == str[k + 2]){
                found = 1;
                printf("Good\n");
                break;
            }
        }
        if (found == 0){
            printf("Bad\n");
        }
    }
}