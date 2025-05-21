#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char character;
    int sum = 0, value;

    int letters_values[] = {
        1, 3, 3, 2, 1, 4, 2, 4,
        1, 8, 5, 1, 3, 1, 1, 3,
        10, 1, 1, 1, 1, 4, 4, 8,
        4, 10
    };

    printf("Enter a word: ");

    while ((character = getchar()) != '\n')
    {
        value = letters_values[toupper(character) - 'A'];
        sum += value;
    }
    
    printf("Scrabble value: %d\n", sum);

    return 0;
}
