#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10

int main(void)
{
    char random_walk[SIZE][SIZE], current_char = 'A';

    bool terminate = false, tried[4] = {false}, moved = false;

    int x = 0, y = 0;
    int directions[4][2] = {
        {0, -1},
        {0, 1},
        {1, 0},
        {-1, 0}
    };

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            random_walk[i][j] = '.';

    random_walk[y][x] = current_char;

    srand((unsigned) time(NULL));

    while (current_char < 'Z')
    {
        for (int i = 0; i < 4; i++)
            tried[i] = false;
        
        bool moved = false;

        while (!moved)
        {
            if (tried[0] && tried[1] && tried[2] && tried[3]) {
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
                random_walk[new_y][new_x] == '.')
            {
                current_char++;
                x = new_x;
                y = new_y;
                random_walk[y][x] = current_char;
                moved = true;
            }
        }

        if (terminate)
            break;        
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%c ", random_walk[i][j]);

        printf("\n");
    }

    return 0;
}
