#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 20

int main(void) {
  char smallest_word[MAX_STR_LEN], largest_word[MAX_STR_LEN],
      word[MAX_STR_LEN] = "", c, *w_ptr;

  printf("Enter word: ");
  scanf("%s", word);

  strcpy(smallest_word, word);
  strcpy(largest_word, word);

  while (strlen(word) != 4) {
    printf("Enter word: ");
    scanf("%s", word);

    if (strcmp(smallest_word, word) > 0) strcpy(smallest_word, word);
    if (strcmp(largest_word, word) < 0) strcpy(largest_word, word);
  }

  printf("Smallest word: %s\n"
         "Largest word: %s\n",
         smallest_word, largest_word);
}
