#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10

void generate_random_walk(char walk[SIZE][SIZE]);
void print_array(char walk[SIZE][SIZE]);

int main(void)
{
    char walk_arr[SIZE][SIZE];
    generate_random_walk(walk_arr);
    print_array(walk_arr);
}

void generate_random_walk(char walk[SIZE][SIZE])
{
    char current_char = 'A';
    bool terminate = false, tried[4] = {false}, moved = false;

    int x = 0, y = 0;
    int directions[4][2] = {
        {0, -1},
        {0, 1},
        {1, 0},
        {-1, 0}};

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            walk[i][j] = '.';

    walk[y][x] = current_char;

    srand((unsigned)time(NULL));

    while (current_char < 'Z')
    {
        for (int i = 0; i < 4; i++)
            tried[i] = false;

        bool moved = false;

        while (!moved)
        {
            if (tried[0] && tried[1] && tried[2] && tried[3])
            {
                terminate = true;
                break;
            }

            int dir = rand() % 4;

            if (tried[dir])
                continue;

            tried[dir] = true;

            int new_x = x + directions[dir][0];
            int new_y = y + directions[dir][1];

            if (new_x >= 0 && new_x < SIZE &&
                new_y >= 0 && new_y < SIZE &&
                walk[new_y][new_x] == '.')
            {
                current_char++;
                x = new_x;
                y = new_y;
                walk[y][x] = current_char;
                moved = true;
            }
        }

        if (terminate)
            break;
    }
}

void print_array(char walk[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%c ", walk[i][j]);

        printf("\n");
    }
}