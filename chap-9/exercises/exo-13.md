# Writing the function

Here is the function :

```C
#include <stdbool.h>
int evaluate_position(char board[8][8])
{
    int white_value = 0, black_value = 0, piece_value = 0;

    for (int i = 0; i < 8; i ++)
    {
        for (int j = 0; j < 8; j ++)
        {
            switch (toupper(board[i][j]))
            {
                case 'Q':
                    piece_value = 9;
                    break;

                case 'R':
                    piece_value = 5;
                    break;
                
                case 'B': case 'N':
                    piece_value = 3;
                    break;
                
                case 'P':
                    piece_value = 1;
                    break;
            }

            if (isupper(board[i][j]))
                white_value += piece_value;
            else
                black_value += piece_value;
        }
    }

    int advantage = white_value - black_value;
    return advantage >= 0 ? true : false;
}
```