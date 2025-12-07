#include <stdio.h>

struct date {
    int month, day, year;
};

int compare_dates(struct date d1, struct date d2);

int main(void)
{
    struct date first_date, second_date;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_date.day, &first_date.month, &first_date.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_date.day, &second_date.month, &second_date.year);

    int comparison_result = compare_dates(first_date, second_date);
    if (comparison_result < 0)
        printf(
            "%d/%d/%.2d is earlier than %d/%d/%.2d",
            first_date.month, first_date.day, first_date.year,
            second_date.month, second_date.day, second_date.year
        );

    else if (comparison_result > 0)
        printf(
            "%d/%d/%.2d is earlier than %d/%d/%.2d",
            second_date.month, second_date.day, second_date.year,
            first_date.month, first_date.day, first_date.year
        );
    else
        printf("The date are equal");
}

// function from exercise 5
int compare_dates(struct date d1, struct date d2) {
  if (d1.year < d2.year)
    return -1;
  else if (d1.year > d2.year)
    return 1;

  if (d1.month < d2.month)
    return -1;
  else if (d1.month > d2.month)
    return 1;

  if (d1.day < d2.day)
    return -1;
  else if (d1.day > d2.day)
    return 1;

  return 0;
}
