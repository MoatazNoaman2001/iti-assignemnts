#include<stdio.h>
#include<math.h>

int main(){
    int i,j , o, d;
    scanf("%d %d %d %d" , &i, &j, &o, &d);
    if (i < 0  || i > 100 || o < 0  || o > 100 || j < 0 || j > 100) return 0;
    if (abs(i - o) <= d || (abs(i - j) <= d && abs(j - o) <= d)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}