#include <stdio.h>

int main(void)
{
    int number;
    long value = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        value *= i;
    
    printf("Factorial of %d: %ld\n", number, value);

    // a. the largest is 8
    // b. the largest is 16
    // c. the largest is 25
    // d. the largest is 25
    // e. the largest is 34
    // f. the largest is 170
    // g. the largest is 1754
    return 0;
}