#include <stdio.h>
#include <ctype.h>

#define MAX_MSG_LENGTH 144

int main(void)
{
    char ch, message[MAX_MSG_LENGTH];
    int char_index = 0;

    printf("Enter message: ");

    while ((ch = getchar()) != '\n')
    {
        message[char_index] = ch;
        char_index++;
    }

    printf("In B1FF-speak: ");
    
    for (int i = 0; i < char_index; i++)
    {
        switch (toupper(message[i]))
        {
        case 'A':
            printf("%d", 4);
            break;
        
        case 'B':
            printf("%d", 8);
            break;
        
        case 'E':
            printf("%d", 3);
            break;
        
        case 'I':
            printf("%d", 1);
            break;

        case 'O':
            printf("%d", 0);
            break;
        
        case 'S':
            printf("%d", 5);
            break;

        default:
            printf("%c", toupper(message[i]));
            break;
        }
    }
    
    printf("!!!!!!!!!!\n");

    return 0;
}