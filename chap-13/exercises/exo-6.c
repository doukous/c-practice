#include <stdio.h>

void censor(char *s);

int main(void) {
    char str[] = "food fool";
    censor(str);
    puts(str);
}

void censor(char *str) {
    while (*str) {
        if (*str == 'f' && *(str + 1) == 'o' && *(str + 2) == 'o')
            *str = *(str + 1) = *(str + 2) = 'x';

        str++;
    }
}
