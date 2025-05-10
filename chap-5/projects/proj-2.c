#include <stdio.h>


int main(void)
{
    int hour, minute, converted_hour;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    switch (hour)
    {
        case 1: case 13:
            converted_hour = 1;
            break;
        
        case 2: case 14:
            converted_hour = 2;
            break;
        
        case 3: case 15:
            converted_hour = 3;
            break;

        case 4: case 16:
            converted_hour = 4;
            break;

        case 5: case 17:
            converted_hour = 5;
            break;

        case 6: case 18:
            converted_hour = 6;
            break;
        
        case 7: case 19:
            converted_hour = 7;
            break;

        case 8: case 20:
            converted_hour = 8;
            break;

        case 9: case 21:
            converted_hour = 9;
            break;

        case 10: case 22:
            converted_hour = 10;
            break;

        case 11: case 23:
            converted_hour = 11;
            break;

        case 12:
            converted_hour = 12;
            break;

        case 0:
            converted_hour = 0;
            break;
    }

    printf("Equivalent 12-hour time: %d:%d ", converted_hour, minute);
    hour > 11 ? printf("PM\n") : printf("AM\n");
}