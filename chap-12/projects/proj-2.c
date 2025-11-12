#include <stdio.h>
#include <ctype.h>

#define LEN_MAX_MSG 48

void first_version(void);
void second_version(void);

int main(void)
{
    first_version();
    second_version();
}

void first_version(void)
{
    char message[LEN_MAX_MSG], c;
    int index = 0;

    printf("Enter a message: ");
    while (index < LEN_MAX_MSG && (c = getchar()) != '\n')
    {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            *(message + index) = tolower(c);
            index++;
        }
    }

    index--;

    for (int i = 0; i < index / 2; i++)
    {
        if (*(message + i) != *(message + index - i))
        {
            printf("Not a palindrome\n");
            return;
        }
    }

    printf("Palindrome\n");
}

void second_version(void)
{
    char message[LEN_MAX_MSG], c;
    char *ptr = message, *start_ptr = message;

    printf("Enter a message: ");
    while (ptr < message + LEN_MAX_MSG && (c = getchar()) != '\n')
    {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            *ptr++ = tolower(c);
        }
    }

    ptr--;

    for (; start_ptr <= ptr; ptr--, start_ptr++)
    {
        if (*start_ptr != *ptr)
        {
            printf("Not a palindrome\n");
            return;
        }
    }

    printf("Palindrome\n");
}