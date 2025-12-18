#include <stdio.h>
#include <stdlib.h>

void *my_malloc(unsigned int n);

int main(void) {
    void *ptr = my_malloc(10);
    if (ptr != NULL) puts("allocation succeded");
}

void *my_malloc(unsigned int n) {
    void *ptr;
    ptr = malloc(n);

    if (ptr == NULL) {
        printf("Not enough space.\n");
        exit(EXIT_FAILURE);
    }

    return ptr;
}
