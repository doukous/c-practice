#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char input, first_initial = '#';

    printf("Enter a first and last name: ");

    while ((input = getchar()) != '\n')
    {
        if (input != '\40' && first_initial == '#')    
            first_initial = input;
        
        else if (input == '\40' && first_initial != '#')
            break;
    }

    while ((input = getchar()) != '\n')
    {
        if (input != '\40')
            printf("%c", input);        
    }
    
    printf(", %c\n", first_initial);

    return 0;
}