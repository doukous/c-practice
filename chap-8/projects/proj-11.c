#include <stdio.h>

#define MAX_MSG_LENGTH 15

int main(void)
{
    char alpha_num, phone_number[MAX_MSG_LENGTH];

    printf("Enter phone number: ");

    int index = 0;
    
    while ((alpha_num = getchar()) != '\n')
    {
        switch (alpha_num)
        {
        case 'A': case 'B': case 'C':
            phone_number[index] = '2';
            break;

        case 'D': case 'E': case 'F': 
            phone_number[index] = '3';
            break;

        case 'G': case 'H': case 'I': 
            phone_number[index] = '4';
            break;

        case 'J': case 'K': case 'L': 
            phone_number[index] = '5';
            break;

        case 'M': case 'N': case 'O':
            phone_number[index] = '6';
            break;

        case 'P': case 'R': case 'S':
            phone_number[index] = '7';
            break;
        
        case 'T': case 'U': case 'V':
            phone_number[index] = '8';
            break;

        case 'W': case 'X': case 'Y':
            phone_number[index] = '9';
            break;

        default:
            phone_number[index] = alpha_num;
            break;
        }

        index++;
    }

    printf("In numeric form: ");

    for (int i = 0; i < index; i++)
        printf("%c", phone_number[i]);

    printf("\n");

    return 0;
}