#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    double y, average = 1;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    do
    {
        y = average;
        average = (x / y + y) / 2;
    } while (fabs(y - average) >= y * .00001);

    printf("Square root: %.5f\n", y);

    return 0;
}