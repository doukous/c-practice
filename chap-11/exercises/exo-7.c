#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int doy = 366, year = 2024, month, day;
    split_date(doy, year, &month, &day);

    printf("the day: %d, the month: %d\n", day, month);
}

bool is_leap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int months_num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    *month = (int)(day_of_year / 31) + 1;

    int total_day_passed = 0;

    for (int i = 0; i < *month - 1; i++)
        total_day_passed += months_num_days[i];

    if (*month > 2 && is_leap(year))
        total_day_passed++;

    *day = day_of_year - total_day_passed;
}
