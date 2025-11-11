#include <stdbool.h>

// the function from the exercise 7
bool search(const int a[], int n, int key)
{
    for (const int *i = a; i < a + n; i++)
        if (*i == key)
            return true;

    return false;
}

int main(void)
{
    int temperatures[7][24];

    // the statement
    search(temperatures[0], 24 * 7, 32);
}