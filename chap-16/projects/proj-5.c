#include <stdio.h>

struct daily_flight {
  int departure, arrival;
};

int main(void)
{
    struct daily_flight times[] = {
        {8 * 60, 10 * 60 + 16},
        {9 * 60 + 43, 11 * 60 + 53},
        {11 * 60 + 19, 13 * 60 + 31},
        {12 * 60 + 47, 15 * 60},
        {14 * 60, 16 * 60 + 8},
        {15 * 60 + 45, 17 * 60 + 55},
        {19 * 60, 21 * 60 + 20},
        {21 * 60 + 45, 11 * 60 + 58}
    };

    int hour, minute, converted_time, compared_value, closest_departure, least_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);


    converted_time = hour * 60 + minute;
    closest_departure = 0;
    least_time = 1440;  // the value of 24 hours * 60 min,
                        // the highest value that can be obtained

    for (int i = 0; i < 8; i++)
    {
        int compared_time =
        converted_time > times[i].departure ?
        (converted_time - times[i].departure) :
        (times[i].departure - converted_time);

        if (compared_value < least_time) {
            closest_departure = i;
            least_time = times[i].departure;
        }
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
}
