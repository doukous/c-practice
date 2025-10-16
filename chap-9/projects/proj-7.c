#include <stdio.h>

float power(float x, unsigned int n)
{
    if (n == 0)
        return 1;

    else if (n % 2 == 0)
        return (float)power(x, n / 2) * power(x, n / 2);

    else if (n % 2 != 0)
        return x * (float)power(x, n - 1);
}

int main(void)
{
    float x;
    unsigned int n;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    printf("Enter a value for n: ");
    scanf("%u", &n);

    printf("The result of %.3f power of %d is : %.3f\n", x, n, power(x, n));
}