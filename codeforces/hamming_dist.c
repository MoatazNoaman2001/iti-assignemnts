#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(){
    long n;
    char str[200001], str2[200001], str3[200003], res[200001];
    scanf("%ld" , &n); 
    if (n < 0 || n > 200000)return 0;
    scanf("%s", str);
    scanf("%s", str2);
    scanf("%s", str3);

    for (long i=0; i < n;i++){
        char choice[3] = {str[i], str2[i], str3[i]};
        char init = choice[0];
        int t_dist = n+1;
        for (int j=0;j<3;j++){
            char selected = choice[j];
            int max = 0;
            max += (selected != str[i]);
            max += (selected != str2[i]);
            max += (selected != str3[i]);

            if (max < t_dist){
                t_dist = max;
                init = selected;
            }
        }
        res[i] = init;
    }

    printf("%s\n" , res);
}