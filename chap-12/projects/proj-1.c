#include <stdio.h>
#define LEN_MAX_MSG 64

void first_version(void);
void second_version(void);

int main(void)
{
    first_version();
    second_version();
}

void first_version(void)
{
    char message[LEN_MAX_MSG], character;
    int index = 0;

    printf("Enter a message (v1) : ");
    while (index < LEN_MAX_MSG && (character = getchar()) != '\n')
    {
        *(message + index) = character;
        index++;
    }

    printf("Reversal is: ");
    for (char *c = message + index; c >= message; c--)
        putchar(*c);

    putchar('\n');
}

void second_version(void)
{
    char message[LEN_MAX_MSG], *ptr = message, c;

    printf("Enter a message (v2) : ");
    while (ptr < message + LEN_MAX_MSG && (c = getchar()) != '\n')
    {
        *ptr = c;
        ptr++;
    }

    printf("Reversal is: ");
    while (ptr >= message)
    {
        putchar(*ptr);
        ptr--;
    }

    putchar('\n');
}
