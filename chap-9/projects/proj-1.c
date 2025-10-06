#include <stdio.h>

#define ARRAY_SIZE 5

void selection_sort(int array[], int n);

int main(void)
{
    int arr[ARRAY_SIZE] = {0};

    printf("Enter values\n");

    int n = 0;

    while (n < ARRAY_SIZE)
    {
        printf("for n=%d : ", n);
        scanf("%d", &arr[n]);
        n++;
    }

    selection_sort(arr, 0);

    printf("After sort : ");
    n = 0;

    while (n < ARRAY_SIZE)
    {
        printf("%d ", arr[n]);
        n++;
    }
}

void selection_sort(int array[], int n)
{
    if (ARRAY_SIZE == n)
        return;

    int max = 0, max_index = 0, iterations = ARRAY_SIZE - n;

    for (int i = 0; i < iterations; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
    }

    int tmp = array[iterations];
    array[iterations] = max;
    array[max_index] = tmp;

    n++;
    selection_sort(array, n);
}
