#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *string) {
    int string_len = strlen(string);
    char *duplicate_ptr = malloc(string_len + 1);

    if (duplicate_ptr == NULL)
        exit(EXIT_FAILURE);

    strcpy(duplicate_ptr, string);
    return duplicate_ptr;
}

int main(void) {
    char *str = "a test string.";
    char *copy_str = duplicate(str);
    printf("copied string: %s\n", copy_str);
}
