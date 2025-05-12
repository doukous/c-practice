#include <stdio.h>

int main(void)
{
    int first_num, second_num, remainder, greatest = 0;

    printf("Enter a fraction: ");
    scanf("%d/%d", &first_num, &second_num);

    greatest = first_num >= second_num ? first_num : second_num;
    int lowest = first_num <= second_num ? first_num : second_num;

    while (lowest != 0)
    {
        remainder = greatest % lowest;
        greatest = lowest;
        lowest = remainder;
    }

    printf("In lowest terms: %d/%d\n", first_num / greatest, second_num / greatest);
    
    return 0;
}