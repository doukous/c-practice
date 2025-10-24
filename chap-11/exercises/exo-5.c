#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    int h, m, s, total = 31125;
    split_time(total, &h, &m, &s);
    printf("hr: %d, min: %d, sec: %d\n", h, m, s);
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = total_sec / 60 - *hr * 60;
    *sec = total_sec - *hr * 3600 - *min * 60;
}