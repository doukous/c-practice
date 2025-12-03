#include <stdio.h>

struct date {
  int day, month, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void) {
  struct date d1 = {3, 3, 2013}, d2 = {1, 4, 2013};
  printf("d1's date : %d\n", d1.day);

  int result = compare_dates(d1, d2);
  printf("result of the comparison: %d\n", result);
}

int day_of_year(struct date d) { return d.day; }

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
