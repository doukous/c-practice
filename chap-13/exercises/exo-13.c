#include <stdio.h>
#include <string.h>


void build_index_url(const char *domain, char *index_url);

int main(void) {
    char url[128], domain[] = "knking.com";
    build_index_url(domain, url);
    puts(url);
}

void build_index_url(const char *domain, char *index_url) {
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
