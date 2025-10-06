#include <stdio.h>

#define LIMIT 31 // limite max pour le type int

int fact(int x)
{
    int fact_x[LIMIT] = {1};

    for (int i = 1; i < x; i++)
        fact_x[i] = fact_x[i - 1] * (i + 1);

    return fact_x[x - 1];
}

int main(void)
{
    int num = 4;
    printf("Fact of %d is %d\n", num, fact(num));
}