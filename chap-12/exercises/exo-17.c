#include <stdio.h>
#define LEN 10

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int *ptr, sum = 0;
    for (ptr = a[0]; ptr < a + LEN * n; ptr++)
        sum += *ptr;
    return sum;
}
