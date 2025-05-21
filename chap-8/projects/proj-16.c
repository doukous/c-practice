#include <stdio.h>
#include <ctype.h>

# define ARRAY_LENGTH 26

int main(void)
{
    char input_char;
    int number_of_words = 0, first_word[ARRAY_LENGTH] = {0};

    printf("Enter first word: ");

    while ((input_char = getchar()) != '\n')
    {
        if (isalpha(input_char))
            first_word[tolower(input_char) - 'a']++;

        number_of_words++;
    }

    printf("Enter second word: ");

    number_of_words = 0;

    while ((input_char = getchar()) != '\n')
    {
        if (isalpha(input_char))
            first_word[tolower(input_char) - 'a']--;

        number_of_words++;
    }

    int is_anagram = 1;

    for (int j = 0; j < ARRAY_LENGTH; j++)
    {
        if (first_word[j] > 0)
        {
            is_anagram = 0;
            printf("The words are not anagrams.");
            break;
        }
    }

    if (is_anagram)
        printf("The words are anagrams.");    
}