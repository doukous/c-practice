#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 26

void read_word(int counts[SIZE]);
bool equal_array(int counts1[SIZE], int counts2[SIZE]);

int main(void)
{
    int counts1[SIZE] = {0}, counts2[SIZE] = {0};

    printf("Enter first word: ");
    read_word(counts1);

    printf("Enter second word: ");
    read_word(counts2);

    bool are_anagrams = equal_array(counts1, counts2);

    if (are_anagrams)
        printf("The words are anagrams.\n");
    else
        printf("THe words are not anagrams.\n");
}

void read_word(int counts[SIZE])
{
    char input_char;

    while ((input_char = getchar()) != '\n')
    {
        if (isalpha(input_char))
            counts[tolower(input_char) - 'a']++;
    }
}

bool equal_array(int counts1[SIZE], int counts2[SIZE])
{
    bool are_anagrams = true;

    for (int i = 0; i < SIZE; i++)
    {
        if (counts1[i] != counts2[i])
        {
            are_anagrams = false;
            break;
        }
    }

    return are_anagrams;
}