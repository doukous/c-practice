#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute, converted_time, compared_value, closest_departure, least_time;
    char time_indicator;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &time_indicator);

    if (toupper(time_indicator) == 'P' && hour != 12)
        hour += 12;

    else if (toupper(time_indicator) =='A' && hour == 12)
        hour = 0;

    converted_time = hour * 60 + minute;
    closest_departure = 0;
    least_time = 1440;  // the value of 24 hours * 60 min,
                        // the highest value that can be obtained
    
    
    compared_value = (converted_time > 8 * 60) ? (converted_time - 8 * 60) : (8 * 60 - converted_time);
    least_time = compared_value;
    closest_departure = 0;

    compared_value = (converted_time > 9 * 60 + 43) ? (converted_time - (9 * 60 + 43)) : ((9 * 60 + 43) - converted_time);
    if (least_time > compared_value) {
        closest_departure = 1;
        least_time = compared_value;
    }

    compared_value = (converted_time > 11 * 60 + 19) ? (converted_time - (11 * 60 + 19)) : ((11 * 60 + 19) - converted_time);
    if (least_time > compared_value) {
        closest_departure = 2;
        least_time = compared_value;
    }

    compared_value = (converted_time > 12 * 60 + 47) ? (converted_time - (12 * 60 + 47)) : ((12 * 60 + 47) - converted_time);
    if (least_time > compared_value) {
        closest_departure = 3;
        least_time = compared_value;
    }

    compared_value = (converted_time > 14 * 60) ? (converted_time - 14 * 60) : (14 * 60 - converted_time);
    if (least_time > compared_value) {
        closest_departure = 4;
        least_time = compared_value;
    }

    compared_value = (converted_time > 15 * 60 + 45) ? (converted_time - (15 * 60 + 45)) : ((15 * 60 + 45) - converted_time);
    if (least_time > compared_value) {
        closest_departure = 5;
        least_time = compared_value;
    }

    compared_value = (converted_time > 19 * 60) ? (converted_time - 19 * 60) : (19 * 60 - converted_time);
    if (least_time > compared_value) {
        closest_departure = 6;
        least_time = compared_value;
    }

    compared_value = (converted_time > 21 * 60 + 45) ? (converted_time - (21 * 60 + 45)) : ((21 * 60 + 45) - converted_time);
    if (least_time > compared_value) {
        closest_departure = 7;
        least_time = compared_value;
    }
    
    switch (closest_departure)
    {
    case 0:
        printf("Closest departure is 8:00 a.m., arriving at 10:16 a.m.");
        break;
    
    case 1:
        printf("Closest departure is 9:43 a.m., arriving at 11:52 a.m.");
        break;
    
    case 2:
        printf("Closest departure is 11:19 a.m., arriving at 1:31 p.m.");
        break;
    
    case 3:
        printf("Closest departure is 12:47 p.m., arriving at 3:00 p.m.");
        break;
    
    case 4:
        printf("Closest departure is 2:00 p.m., arriving at 4:08 p.m.");
        break;  
    
    case 5:
        printf("Closest departure is 3:45 p.m., arriving at 5:55 p.m.");
        break;  
    
    case 6:
        printf("Closest departure is 7:00 p.m., arriving at 9:20 p.m.");
        break;
    
    case 7:
        printf("Closest departure is 9:45 p.m., arriving at 11:58 p.m.");
        break;
    }

    return 0;
}