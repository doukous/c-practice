#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int list[] = {12, 4, 5, 9, 10, 3, 7, 15};
    int len = sizeof(list) / sizeof(int);

    int *index = find_largest(list, len);
    printf("max element address: %p, value: %d\n", index, *index);
}

int *find_largest(int a[], int n)
{
    static int *max_index;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = &a[i];
        }
    }

    return max_index;
}