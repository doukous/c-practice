#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int list[] = {12, 4, 5, 9, 10, 3, 7, 15};
    int len = sizeof(list) / sizeof(int);

    int fl, sl;

    find_two_largest(list, len, &fl, &sl);

    printf("largest: %d, second largest: %d\n", fl, sl);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int max = 0, largest_index = 0;

    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
            largest_index = j;
        }
    }

    *largest = max;
    max = 0;

    for (int j = 0; j < n; j++)
        if (j != largest_index && a[j] > max)
            max = a[j];

    *second_largest = max;
}