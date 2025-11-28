/* Prints a one-month reminder list */
#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50
#define MSG_LEN 60

/* maximum number of reminders */
/* max length of reminder message */
int read_line(char str[], int n);

int main(void) {
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char date_str[12], msg_str[MSG_LEN + 1];
  int month, day, hour, minute, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d/%2d", &month, &day);

    if (day < 0 || day > 31 || month < 0 || month > 12) {
      puts("Incorrect value of day or month.");
      read_line(msg_str, MSG_LEN);
      continue;
    }

    if (day == 0)
      break;

    scanf("%2d:%2d", &hour, &minute);
    read_line(msg_str, MSG_LEN);

    sprintf(date_str, "%2d/%2d %2d:%2d", month, day, hour, minute);

    for (i = 0; i < num_remind; i++)
      if (strcmp(date_str, reminders[i]) < 0)
        break;

    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j - 1]);

    strcpy(reminders[i], date_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");

  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;

  str[i] = '\0';
  return i;
}
