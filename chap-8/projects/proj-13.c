#include <stdio.h>
#include <ctype.h>


#define MAX_LASTNAME_LENGTH 20

int main(void)
{
    char input, first_initial = '#', lastname_char[MAX_LASTNAME_LENGTH];

    printf("Enter a first and last name: ");

    while ((input = getchar()) != '\n')
    {
        if (input != '\40' && first_initial == '#')    
            first_initial = input;
        
        else if (input == '\40' && first_initial != '#')
            break;
    }

    int index = 0;

    while ((input = getchar()) != '\n')
    {
        if (input != '\40')
        {
            lastname_char[index] = input;
            index++;
        }
    }

    printf("You entered the name: ");

    for (int i = 0; i < index; i++)
        printf("%c", lastname_char[i]);
    
    printf(", %c\n", first_initial);

    return 0;
}