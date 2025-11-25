#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool test_extension(const char *file_name, const char *extension);

int main(void) {
    bool isSame = test_extension("main.txt", "TXT");

    if (isSame) puts("it's the same extension.");
    else puts("it isn't the same extension.");
}

bool test_extension(const char *file_name, const char *extension) {
    while (*file_name) {
        if (*file_name == '.')
            break;
        file_name++;
    }

    if (! *file_name) return false;

    char file_extension[16];
    strcpy(file_extension, ++file_name);

    for (char *c = file_extension; *c; c++) *c = toupper(*c);

    if (! strcmp(file_extension, extension)) return true;
    return false;
}
