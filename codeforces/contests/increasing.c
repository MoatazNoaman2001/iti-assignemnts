    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>

    #define PI 3.14

    int main(){
        int T;
        scanf("%i" , &T);
        if (T<1 || T> 100) return 0;

        for (int i= 0; i < T; i ++){
            int t;
            scanf("%i" , &t);
            if (t<1 || t> 100) return 0;

            long int *arr = malloc(t * sizeof(long int));
            
            int isDuplicate = 0;
            for (int u = 0; u < t; u ++) {
                scanf("%ld", &arr[u]);
            }

            for (int u = 0; u < t; u ++) {
                for (int l = u + 1; l < t; l ++) {
                    if (arr[u] == arr[l]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (isDuplicate) break;
            }
            if (isDuplicate) {
                printf("NO\n");
            } else {
                printf("YES\n");
            }
            free(arr);
        }
    }