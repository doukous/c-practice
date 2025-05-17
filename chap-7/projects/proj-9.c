#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char time_indicator;
    
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &time_indicator);

    if (toupper(time_indicator) == 'P' && hour != 12)
        hour += 12;

    else if (toupper(time_indicator) =='A' && hour == 12)
        hour = 0;

    printf("Equivalent 24-hour time: %d:%02d\n", hour, minute);

    return 0;
}