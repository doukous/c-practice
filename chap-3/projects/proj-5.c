#include <stdio.h>

int main(void)
{
    int first_0, second_0, third_0, fourth_0,
        first_1, second_1, third_1, fourth_1,
        first_2, second_2, third_2, fourth_2,
        first_3, second_3, third_3, fourth_3;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf(
        "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &first_0, &second_0, &third_0, &fourth_0,
        &first_1, &second_1, &third_1, &fourth_1,
        &first_2, &second_2, &third_2, &fourth_2,
        &first_3, &second_3, &third_3, &fourth_3
    );

    printf(
        "Row sums: %d %d %d %d\n", 
        first_0 + second_0 + third_0 + fourth_0,
        first_1 + second_1 + third_1 + fourth_1,
        first_2 + second_2 + third_2 + fourth_2,
        first_3 + second_3 + third_3 + fourth_3
    );

    printf(
        "Column sums: %d %d %d %d\n", 
        first_0 + first_1 + first_2 + first_3,
        second_0 + second_1 + second_2 + second_3,
        third_0 + third_1 + third_2 + third_3,
        fourth_0 + fourth_1 + fourth_2 + fourth_3
    );

    printf(
        "Row sums: %d %d\n", 
        first_0 + second_1 + third_2 + fourth_3,
        fourth_0 + third_1 + second_2 + first_3
    );
}