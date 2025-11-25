#include <stdio.h>

int count_spaces(const char *s);

int main(void) {
    int number = count_spaces("the count of spaces is 2.");
    printf("number of spaces: %d\n", number);
}

int count_spaces(const char *s)
{
    int count = 0;

    while (*s++)
        if (*s == ' ')
            count++;

    return count;
}
