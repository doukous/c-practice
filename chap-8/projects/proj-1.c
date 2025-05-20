#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false}, one_repeated = false, repeated[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (! one_repeated && digit_seen[digit])
            one_repeated = true;        

        if (digit_seen[digit])
            repeated[digit] = true;

        digit_seen[digit] = true;
        n /= 10;
    }
    
    if (!one_repeated)
        printf("No repeated digit.");
    
    else {
        printf("Repeated digit(s): ");

        for (int i = 0; i < 10; i++)
            if (repeated[i])
                printf("%d ", i);
    }

    printf("\n");

    return 0;
}