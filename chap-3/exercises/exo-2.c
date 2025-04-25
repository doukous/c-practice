#include <stdio.h>

int main(void)
{
    float x = 12.34;

    printf("|%-8.1e|\n", x); /*a*/
    printf("|%10.6e|\n", x); /*b*/
    printf("|%-8.3f|\n", x); /*c*/
    printf("|%6.0g|\n", x); /*d*/
}