#include <stdio.h>

#define SENTENCE_MAX_SIZE 144

int main(void)
{
    char input_char, terminating_char, sentence_char[SENTENCE_MAX_SIZE];
    int stop_index;

    printf("Enter a sentence: ");


    for (int i = 0; i < SENTENCE_MAX_SIZE; i++)
    {
        input_char = getchar();

        if (input_char != '.' && input_char != '?' && input_char != '!')
            sentence_char[i] = input_char;
        else
        {
            terminating_char = input_char;
            stop_index = i - 1;
            break;
        }
    }

    printf("Reversal of sentence: ");

    int start, end;
    end = stop_index;

    while (end >= 0)
    {
        start = end;

        while (sentence_char[start] != '\40' && start >= 0)
            start--;
        
        for (int j = start + 1; j <= end; j++)
            putchar(sentence_char[j]);

        if (start > 0)
            putchar('\40');

        end = start - 1;
    }
    
    printf("%c\n", terminating_char);
}