#include <stdio.h>


int main(void)
{
    char character;
    int char_num = 0, word_num = 0;
    
    printf("Enter a sentence: ");

    while ((character = getchar()) != '\n')
    {
        if (character != '\40')
            char_num++;

        else if(character == '\40')
            word_num++;
    }

    printf("Average word length: %.1f\n", (float) char_num / (word_num + 1));
    
    return 0;
}