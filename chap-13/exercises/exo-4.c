#include <stdio.h>
#include <ctype.h>

#define STR_LEN 10

int read_line(char str[], int n);

int main(void)
{
    char s[STR_LEN + 1];
    read_line(s, STR_LEN);

    printf("%s\n", s);
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) == 32)
        ;

    str[i++] = ch;

    while (!isspace((ch = getchar())))
        if (i < n)
            str[i++] = ch;
        else
            break;

    if (isspace(ch) && i < n - 1)
        str[i++] = ch;

    str[i] = '\0';

    return i;
}
