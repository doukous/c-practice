#include <stdio.h>

int main(int argc, char *argv[]) {
    for (char **str = argv + argc - 1; str > argv; str--)
        printf("%s ", *str);
    putchar('\n');
}
