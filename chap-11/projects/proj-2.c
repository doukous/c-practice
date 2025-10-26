#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hour, minute, converted_time, departure, arrival;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    converted_time = hour * 60 + minute;

    find_closest_flight(converted_time, &departure, &arrival);

    printf("Closest are:\n");
    printf("- Departure: %d:%d\n", departure / 60, departure % 60);
    printf("- Arrival: %d:%d\n", arrival / 60, arrival % 60);
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int departure_times[] = {
        8 * 60,
        9 * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45

    };

    int arrival_times[] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58,
    };

    int least_time = 1440, least_time_index = 0;

    for (int i = 0; i < 8; i++)
    {
        if (abs(departure_times[i] - desired_time) < least_time)
        {
            least_time = abs(departure_times[i] - desired_time);
            least_time_index = i;
        }
    }

    *departure_time = departure_times[least_time_index];
    *arrival_time = arrival_times[least_time_index];
}