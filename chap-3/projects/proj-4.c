#include <stdio.h>

int main(void)
{
    int first_num, second_num, third_num;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &first_num, &second_num, &third_num);

    printf("You entered %d.%d.%d\n", first_num, second_num, third_num);
}