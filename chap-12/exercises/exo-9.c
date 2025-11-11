#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
    double sum = 0;

    for (const double *pa = a, *pb = b; pa < a + n; pa++, pb++)
        sum += *pa * *pb;

    return sum;
}

int main(void)
{
    double a[] = {1, 2}, b[] = {2, 3};
    double result = inner_product(a, b, 2);

    printf("result : %.f\n", result);
}