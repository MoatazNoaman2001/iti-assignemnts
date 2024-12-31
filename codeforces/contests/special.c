#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max_n 50
#define max_m 50

int main(){
    int n, m;
    long int k[max_m][max_n];
    scanf("%i %i" , &n , &m);

    int row_max[max_n]=  {0};
    int col_max[max_m]=  {0};
    if ((n < 1 || n > 50) || (m < 1 || m > 50)) return 0;
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &k[i][j]);
            if (k[i][j] > row_max[i]) {
                row_max[i] = k[i][j];
            }
            if (k[i][j] > col_max[j]) {
                col_max[j] = k[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (k[i][j] == row_max[i] && k[i][j] == col_max[j]) {
                printf("%d ", k[i][j]);
            }
        }
    }

    printf("\n");
}