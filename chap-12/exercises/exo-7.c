#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int tab[] = {1, 4, 6, 2, 8, 0, 9};
    bool found = search(tab, 7, 8);

    printf("found: %d\n", found);
}

bool search(const int a[], int n, int key)
{
    for (const int *i = a; i < a + n; i++)
        if (*i == key)
            return true;

    return false;
}