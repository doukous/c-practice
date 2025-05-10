#include <stdio.h>

int main(void)
{
    int first, second, third, fourth, first_max, min1, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    first_max = first;
    min1 = first;

    if (second > first_max) first_max = second;
    if (second < min1) min1 = second;

    if (third > first_max) first_max = third;
    if (third < min1) min1 = third;

    if (fourth > first_max) first_max = fourth;
    if (fourth < min1) min1 = fourth;

    largest = first_max;
    smallest = min1;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
}