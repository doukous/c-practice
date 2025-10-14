#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    int number = 1;
    int row = 0;
    int col = n / 2;

    while (number <= n * n)
    {
        magic_square[row][col] = number;

        int next_row = (row - 1 + n) % n;
        int next_col = (col + 1) % n;

        if (magic_square[next_row][next_col] != 0)
            row = (row + 1) % n;

        else
        {
            row = next_row;
            col = next_col;
        }

        number++;
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%4d", magic_square[i][j]);

        printf("\n");
    }
}

int main(void)
{
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int size, attempts = 0;

    do
    {
        printf("Enter size of magic square: ");
        scanf("%d", &size);

        if (size < 1 || size > 99 || size % 2 == 0)
        {
            printf("Invalid input. Please enter an odd number between 1 and 99.\n");
            attempts++;
        }
        else
            break;

    } while (attempts < 3);

    char magic_square[size][size];

    create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);
}