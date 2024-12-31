#include <stdio.h>
#include <math.h>

int main() {
    long n;
    scanf("%ld", &n);
    if (n > pow(10, 5) || n < 2) return 0;

    long long max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        if (x > pow(10, 9) || x < 2) return 0;

        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max2 = x; 
        }
    }

    printf("%lld\n", max2 % max1);
    return 0;
}
