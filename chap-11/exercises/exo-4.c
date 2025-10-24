#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{
    int a = 5;
    int b = 4;

    swap(&a, &b);

    printf("value of a: %d, value of b: %d\n", a, b);
}