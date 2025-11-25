#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void) {
    char file[] = "main.ripple", extension[16];
    get_extension(file, extension);

    if (*extension)
        printf("the extension: %s\n", extension);
    else
     puts("no extension.");
}

void get_extension(const char *file_name, char *extension) {
    char *c;
    int file_name_length = strlen(file_name), i = 0;

    while (*file_name) {
        if (*file_name == '.') {
            break;
        }
        file_name++;
    }

    if (! *file_name) {
        *extension = 0;
        return;
    }

    strcpy(extension, ++file_name);
}
