#include <stdio.h>

int gcd(int m, int n) {
    return n == 0 ? m : gcd(n, m % n);
}

int main(void) {
    int m = 12, n = 8;
    printf("the gcd of %d and %d is %d\n", m, n, gcd(m, n));
}
