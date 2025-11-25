#include <ctype.h>
#include <stdio.h>


void capitalize(char *s);

int main(void) {
    char str[] = "bonjour !!";
    capitalize(str);
    puts(str);
}

void capitalize(char *s) {
    while (*s) {
        if (isalpha(*s))
            *s = toupper(*s);
        s++;
    }
}
