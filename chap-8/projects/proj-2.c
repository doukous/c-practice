#include <stdbool.h>
#include <stdio.h>

int main(void)
{

    int digit, digit_occurence[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_occurence[digit]++;
        n /= 10;
    }
    
    printf("Digit: \t\t");

    for (int i = 0; i < 10; i++)
        printf("%d\t", i);
    
    printf("\nOccurences: \t");

    for (int i = 0; i < 10; i++)
        printf("%d\t", digit_occurence[i]);    

    printf("\n");

    return 0;
}