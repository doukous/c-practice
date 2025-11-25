#include <stdio.h>

int strcmp(char *, char *);

int main(void) {
    char str1[] = "ac", str2[] = "ac";
    int val = strcmp(str1, str2);
    printf("%d\n", val);
}

int strcmp(char *s, char *t)
{
    int i;

    for (; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;

    return *s - *t;
}
