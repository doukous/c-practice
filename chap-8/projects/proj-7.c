#include <stdio.h>

int main(void)
{
    int sum = 0, int_arrays[5][5] = {{0}, {0}, {0}, {0}, {0}};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++)
            scanf("%d", &int_arrays[i][j]);
    }

    printf("Row totals: ");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += int_arrays[i][j];

        printf("%d ", sum);

        sum = 0;
    }
    
    printf("\nColumn totals: ");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += int_arrays[j][i];

        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");
}