#include <stdio.h>

int main(void)
{
    int high, low, sum = 0, int_arrays[5][5] = {{0}, {0}, {0}, {0}, {0}};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter quiz grades for student %d: ", i + 1);

        for (int j = 0; j < 5; j++)
            scanf("%d", &int_arrays[i][j]);
    }


    for (int i = 0; i < 5; i++)
    {
        printf("Total score for student %d: ", i + 1);

        for (int j = 0; j < 5; j++)
            sum += int_arrays[i][j];

        printf("%d\n", sum);

        printf("Average score for student %d: %.2f\n", i + 1,  (float) sum / 5);

        sum = 0;
    }
    

    for (int i = 0; i < 5; i++)
    {
        high = 0;
        low = 101;

        for (int j = 0; j < 5; j++){
            if (int_arrays[j][i] > high)
                high = int_arrays[j][i];

            else if (int_arrays[j][i] < low)
                low = int_arrays[j][i];
                
            sum += int_arrays[j][i];
        }

        printf("The average score quiz %d: %.2f\n", i + 1, (float) sum / 5);
        printf("The highest value for quiz %d: %d\n", i + 1, high);
        printf("The lowest value for quiz %d: %d\n", i + 1, low);

    }

    printf("\n");
}