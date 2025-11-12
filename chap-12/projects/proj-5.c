#include <stdio.h>

#define SENTENCE_MAX_SIZE 144

int main(void)
{
    char input_char, terminating_char, sentence_char[SENTENCE_MAX_SIZE], *ptr;
    int stop_index;

    printf("Enter a sentence: ");

    for (ptr = sentence_char; ptr < SENTENCE_MAX_SIZE; ptr++)
    {
        input_char = getchar();

        if (input_char != '.' && input_char != '?' && input_char != '!')
            *ptr++ = input_char;
        else
        {
            terminating_char = input_char;
            break;
        }
    }

    printf("Reversal of sentence: ");

    char *start, *end;
    end = --ptr;

    while (end >= sentence_char)
    {
        start = end;

        while (start != '\40' && start >= sentence_char)
            start--;

        for (char *c = start + 1; c <= end; c++)
            putchar(*c);

        if (start > sentence_char)
            putchar('\40');

        end = start - 1;
    }

    printf("%c\n", terminating_char);
}