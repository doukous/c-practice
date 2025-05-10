// use the program of programming project 6 from chapter 4
#include <stdio.h>

int main(void) 
{
    int first_sum, second_sum, computed_check_digit, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, check_digit;
    
    printf("Enter the full UPC number: ");
    scanf(
        "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &check_digit
    );

    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;

    computed_check_digit = 9 - ((first_sum * 3 + second_sum) - 1) % 10;

    if (check_digit == computed_check_digit)
        printf("VALID");
    else
        printf("INVALID");
}