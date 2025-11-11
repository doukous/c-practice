#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int max = 0;

    for (const int *p = a; p < a + n; p++)
        if (*p > max)
            max = *p;

    *largest = max;
    max = 0;

    for (const int *p = a; p < a + n; p++)
        if (*p != *largest && *p > max)
            max = *p;

    *second_largest = max;
}

int main(void)
{
    int a[] = {1, 3, 9, 13, 5, 8, 22, 7};
    int largest, second_largest;

    find_two_largest(a, 8, &largest, &second_largest);
    printf("largest: %d, second largest: %d\n", largest, second_largest);
}