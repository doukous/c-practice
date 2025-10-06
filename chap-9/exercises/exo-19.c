#include <stdio.h>

void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void) {
    int n = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("output : ");
    pb(n);
    printf("\n");
}