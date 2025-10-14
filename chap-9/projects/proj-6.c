#include <stdio.h>

float polynomial_func(float x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}

int main(void)
{
    float x;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("The result is : %.3f", polynomial_func(x));
}