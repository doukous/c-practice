#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int greatest = numerator >= denominator ? numerator : denominator;
    int lowest = numerator <= denominator ? numerator : denominator;
    int remainder = 0;

    while (lowest != 0)
    {
        remainder = greatest % lowest;
        greatest = lowest;
        lowest = remainder;
    }

    *reduced_numerator = numerator / greatest;
    *reduced_denominator = denominator / greatest;
}