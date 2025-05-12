#include <stdio.h>

int main(void)
{
    int n, f;
    float e = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        f = 1;

        for (int j = 1; j <= i; j++) {
            f *= j;
        }

        e += 1/f;
    }

    printf("The value e for n = %d: %.3f\n", n, e);

    return 0;
}