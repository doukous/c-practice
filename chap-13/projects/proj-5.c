#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sum = 0;

  for (char **value = argv; value < argv + argc; value++)
    sum += atoi(*value);

  printf("Total: %d\n", sum);
}
