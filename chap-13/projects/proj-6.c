/* Checks planet names */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9
int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
        char uargv[20], uplanet[20];
        strcpy(uargv, argv[i]);
        strcpy(uplanet, planets[j]);

        for (char *c = uargv; *c != 0; c++)
            *c = toupper(*c);

        for (char *c = uplanet; *c != 0; c++)
            *c = toupper(*c);

      if (strcmp(uargv, uplanet) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }
  return 0;
}
