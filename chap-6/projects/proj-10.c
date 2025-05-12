#include <stdio.h>

int main(void)
{
    int day, month, year;
    
    int earliest_corresponding_day = 31, 
    earliest_corresponding_month = 12, 
    earliest_corresponding_year = 99;

    do
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (year < 1)
            break;        

        if (year < earliest_corresponding_year)
        {
            earliest_corresponding_year = year;
            earliest_corresponding_month = month;
            earliest_corresponding_day = day;
        }

        else if (year > earliest_corresponding_year)
            continue;

        else if (month < earliest_corresponding_month)
        {
            earliest_corresponding_year = year;
            earliest_corresponding_month = month;
            earliest_corresponding_day = day;
        }

        else if (month > earliest_corresponding_month)
            continue;
        
        else if (day < earliest_corresponding_day)
        {
            earliest_corresponding_year = year;
            earliest_corresponding_month = month;
            earliest_corresponding_day = day;
        }
        
        else if (day > earliest_corresponding_day)
            continue;
    } while (1);

    printf(
        "%d/%d/%d is the earliest date\n", 
        earliest_corresponding_month,
        earliest_corresponding_day,
        earliest_corresponding_year
    );
    
    return 0;
}
