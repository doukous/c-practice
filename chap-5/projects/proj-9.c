#include <stdio.h>

int main(void)
{
    int first_day, first_month, first_year, second_day, second_month, second_year;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

    if (first_year < second_year)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", 
            first_month, first_day, first_year, 
            second_month, second_day, second_year
        );
    
    else if (first_year > second_year)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", 
            second_month, second_day, second_year,
            first_month, first_day, first_year
        );
    
    else if (first_month < second_month)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", 
            first_month, first_day, first_year,
            second_month, second_day, second_year
        );
    
    else if (first_month > second_month)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",
            second_month, second_day, second_year, 
            first_month, first_day, first_year
        );  
    
    else if (first_day < second_day)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",
            first_month, first_day, first_year,
            second_month, second_day, second_year
        );
    
    else if (first_day > second_day)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",
            second_month, second_day, second_year, 
            first_day, first_month, first_year
        );
    
    else
        printf("The date are equal");
}