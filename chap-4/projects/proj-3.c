#include <stdio.h>

int main(void)
{
    int first_number, second_number, third_number;

    printf("Enter the three-digit number: ");
    scanf("%1d %1d %1d", &first_number, &second_number, &third_number);

    printf("The reversal is: %d%d%d \n", third_number, second_number, first_number);
}