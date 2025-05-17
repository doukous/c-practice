#include <stdio.h>

// I consider that it fails when it starts printing
// negative values as a square cannot be negative

int main(void)
{
    short is, s;
    int ii, i;
    long il, l;

    is = s = 1;

    while (s > 0)
    {
        is++;
        s = is * is;
    }

    printf("Here are the failing values :\n");

    printf("for short : %hd  %hd\n", is, s); // the highest short i got : 181 * 181

    ii = i = 1;

    while (i > 0)
    {
        ii++;
        i = ii * ii;
    }

    printf("for int : %d  %d\n", ii, i); // the highest int i got : 46341 * 46341  

    il = l = 1;

    while (l > 0)
    {
        il++;
        l = il * il;
    }

    printf("for long : %ld  %ld\n", il, l); // the highest long i got : 3037000499 * 3037000499


    // i can conclude that my machine is a 64-bit machine

    return 0;
}

