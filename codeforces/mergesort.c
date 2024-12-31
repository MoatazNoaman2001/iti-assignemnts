#include<stdio.h>
#include<math.h>
#include<stdlib.h>

char *merge(char *ar1, int ar1_size,  char *ar2, int ar2_size) {
  int n1 = ar1_size, n2 = ar2_size;
  int n = n1 + n2, i1 = 0, i2 = 0;
  char *ar = (char *)malloc(n * sizeof(char));
  for (int i = 0; i < n; i++) {
    if (i1 == n1) {
      ar[i] = ar2[i2++];
    } else if (i2 == n2) {
      ar[i] = ar1[i1++];
    } else {
      if (ar1[i1] < ar2[i2]) {
        ar[i] = ar1[i1++];
      } else {
        ar[i] = ar2[i2++];
      }
    }
  }
  return ar;
}

char *mergeSort(char *str, int size) {
    if (size <= 1) {
        return str;
    }
    int mid = size / 2;
    char *left = mergeSort(str, mid);
    char *right = mergeSort(str + mid, size - mid);

    char *sorted = merge(left, mid, right, size - mid);

    free(left);
    free(right);
    return sorted;
}


int main(){
    long long n;
    scanf("%lld" , &n);
    if (n < 1 || n > pow(n, 7)){
        return 0;
    }

    char str[5000];
    scanf("%s" , str);
    char *sortedStr = mergeSort(str, n);
    printf("%s\n", sortedStr);

}