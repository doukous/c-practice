#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main(void) {
  char url[] = "http://www.knking.com/index.html";
  remove_filename(url);
  puts(url);
}

void remove_filename(char *url) {
  int url_len = strlen(url);
  char *url_ptr = url + url_len;

  while (*--url_ptr != '/')
    ;
  *url_ptr = 0;
}
