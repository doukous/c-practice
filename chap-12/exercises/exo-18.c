#include <stdbool.h>

int evaluate_position(char *board)
{
    int white_value = 0, black_value = 0, piece_value = 0;

    for (int *ptr = board[0]; ptr < board + 8; ptr++)
    {

        switch (toupper(*ptr))
        {
        case 'Q':
            piece_value = 9;
            break;

        case 'R':
            piece_value = 5;
            break;

        case 'B':
        case 'N':
            piece_value = 3;
            break;

        case 'P':
            piece_value = 1;
            break;
        }

        if (isupper(*ptr))
            white_value += piece_value;
        else
            black_value += piece_value;
    }

    int advantage = white_value - black_value;
    return advantage >= 0 ? true : false;
}