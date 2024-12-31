    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>

    #define PI 3.14

    int main(){
        int T, counter = 1;
        scanf("%i" , &T);
        if (T<1 || T> 100) return 0;
        for (int i = 0; i < T; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < T; j++) {
                    printf("%d ", counter);
                    counter++;
                }
            } else {
                int start = counter + T - 1;
                for (int j = 0; j < T; j++) {
                    printf("%d ", start);
                    start--;
                    counter++;
                }
            }
            printf("\n");
        }

    }