#include <stdio.h>

int main(void)
{
    int number, digit_num;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number / 100 > 1) {
        digit_num = 3;
    }

    else if (number / 10 > 1) {
        digit_num = 2;
    }

    else {
        digit_num = 1;
    }

    printf("The number has %d digits \n", digit_num);
}