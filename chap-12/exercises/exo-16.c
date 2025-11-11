#include <stdio.h>

int main(void)
{
    int *find_largest(int a[], int n);
    int temperatures[7][24];

    int *max;

    for (int *ptr = temperatures, i = 0; temperatures + 7; ptr++, i++)
    {
        int *max = find_largest(ptr, 24);
        printf("day %d: %d\n", i, *max);
    }
}