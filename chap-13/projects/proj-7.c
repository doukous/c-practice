#include <stdio.h>

int main(void) {
  int number, result, last_digit;

  char *decimals[] = {"twenty", "thirty",  "forty",  "fifty",
                      "sixty",  "seventy", "eighty", "ninety"};

  char *units[] = {"one", "two",   "tree",  "four", "five",
                   "six", "seven", "eight", "nine"};

  char *special_decimals[] = {"ten",      "eleven",  "twelve",  "thirteen",
                              "fourteen", "fifteen", "sixteen", "seventeen",
                              "eighteen", "nineteen"};

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  printf("You entered the number ");

  if (number > 10 && number < 20) {
    int index = number % 10;
    puts(special_decimals[index]);
  }

  if ((result = number / 10) > 1)
    printf("%s ", decimals[result - 2]);

  if (result != 1 && (last_digit = number % 10) > 0)
    printf("%s", units[last_digit - 1]);

  putchar('\n');
}
