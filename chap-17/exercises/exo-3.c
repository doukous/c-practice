#include <stdlib.h>


int *create_array(int n, int initial_value) {
    int *array_ptr = malloc(n * sizeof(n));
    if (array_ptr == NULL) exit(EXIT_FAILURE);

    for (int i = 0; i < n - 1; i++) array_ptr[i] = initial_value;
    return array_ptr;
}
