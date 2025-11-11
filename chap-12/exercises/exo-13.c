#include <stdio.h>
#define N 10

double ident[N][N];

int main(void)
{
    int i = 1;
    double *ptr = ident[0];
    *ptr++ = 1;

    for (; ptr < ident[0] + N * N; ptr++, i++)
        if (i == N + 1)
        {
            *ptr = 1.0;
            i = 0;
        }
        else
            *ptr = 0.0;

    for (double *i = ident[0]; i < ident[0] + N * N; i++)
    {
        printf("%.f ", *i);

        if (((i + 1) - ident[0]) % N == 0)
            printf("\n");
    }
}