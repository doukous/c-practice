#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define DICE_NUMBER_RANGE 6;

int roll_dice(void)
{
    int first_dice, second_dice;

    first_dice = rand() % DICE_NUMBER_RANGE;
    second_dice = rand() % DICE_NUMBER_RANGE;

    return first_dice + second_dice;
}

bool play_game(void)
{
    int point = -1;

    int rolling_result = roll_dice();

    printf("You rolled: %d\n", rolling_result);

    if (rolling_result == 7 || rolling_result == 11)
        return true;

    else if (rolling_result == 2 || rolling_result == 3 || rolling_result == 12)
        return false;

    point = rolling_result;

    printf("Your point is %d\n", point);

    while (true)
    {
        rolling_result = roll_dice();

        printf("You rolled: %d\n", rolling_result);

        if (rolling_result == point)
            return true;

        else if (rolling_result == 7)
            return false;
    }
}

int main(void)
{
    srand((unsigned)time(NULL));

    unsigned won_games = 0, lost_games = 0;
    bool has_won = play_game();

    while (true)
    {

        if (has_won)
        {
            printf("You win !\n\n");
            won_games++;
        }

        else
        {
            printf("You lose!\n\n");
            lost_games++;
        }

        printf("Play again? ");

        char answer = getchar();

        if (tolower(answer) != 'y')
        {
            printf("\nWins: %d Losses: %d\n", won_games, lost_games);
            break;
        }

        else
        {
            printf("\n");
            has_won = play_game();
            getchar();
        }
    }
}