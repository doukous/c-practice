#include <stdio.h>


int main(void) {
    int day, month, year;

    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%02d%d \n", year, month, day);
}