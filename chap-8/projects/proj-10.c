#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute, converted_time, compared_value, closest_departure, least_time;
    int departure_times[8] = {
        8 * 60,
        9 * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45

    };

    int arrival_times[8] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58,
    };

    char departure_time_indicator = 'a', arrival_time_indicator = 'a';

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    least_time = 1440;

    for (int i = 0; i < 8; i++)
    {
        converted_time = hour * 60 + minute;
        compared_value = abs(converted_time - departure_times[i]);

        if (least_time >  compared_value)
        {
            least_time = compared_value;
            closest_departure = i;
        }        
    }

    int picked_departure_hour = departure_times[closest_departure] / 60;
    int picked_departure_minute = departure_times[closest_departure] % 60;

    if (picked_departure_hour > 12)
    {
        picked_departure_hour -= 12;
        departure_time_indicator = 'p';
    }

    else if (picked_departure_hour == 0)
        picked_departure_hour = 12;

    int picked_arrival_hour = arrival_times[closest_departure] / 60;
    int picked_arrival_minute = arrival_times[closest_departure] % 60;
    
    if (picked_arrival_hour > 12)
    {
        picked_arrival_hour -= 12;
        arrival_time_indicator = 'p';
    }

    else if (picked_arrival_hour == 0)
        picked_arrival_hour = 12;
    
    printf(
        "Closest departure is %d:%02d %c.m., arriving at %d:%02d %c.m.",
        picked_departure_hour, picked_departure_minute, departure_time_indicator,
        picked_arrival_hour, picked_arrival_minute, arrival_time_indicator
    );    
}