#include <stdio.h>

int main(void)
{
    int first_number, second_number, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &first_number, &second_number);

    int greatest = first_number >= second_number ? first_number : second_number;
    int lowest = first_number <= second_number ? first_number : second_number;

    while (lowest != 0)
    {
        remainder = greatest % lowest;
        greatest = lowest;
        lowest = remainder;
    }

    printf("The greatest common divisor: %d\n", greatest);
    
    return 0;
}