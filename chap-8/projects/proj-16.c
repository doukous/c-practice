#include <stdio.h>
#include <ctype.h>

#define ARRAY_LENGTH 26

int main(void)
{
    char input_char;
    int letter_count[ARRAY_LENGTH] = {0};

    printf("Enter first word: ");

    while ((input_char = getchar()) != '\n')
    {
        if (isalpha(input_char))
            letter_count[tolower(input_char) - 'a']++;
    }

    printf("Enter second word: ");

    while ((input_char = getchar()) != '\n')
    {
        if (isalpha(input_char))
            letter_count[tolower(input_char) - 'a']--;
    }

    int is_anagram = 1;

    for (int j = 0; j < ARRAY_LENGTH; j++)
    {
        if (letter_count[j] > 0)
        {
            is_anagram = 0;
            printf("The words are not anagrams.");
            break;
        }
    }

    if (is_anagram)
        printf("The words are anagrams.");
}