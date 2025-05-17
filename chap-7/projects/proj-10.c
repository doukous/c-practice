#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char character;
    int count = 0;

    printf("Enter a sentence: ");

    while ((character = toupper(getchar())) != '\n')
    {
        switch (character)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        }
    }

    printf("Your sentence contains %d vowels.", count);
}