#include <stdio.h>

#define MSG_MAX_LENGTH 80

int main(void)
{
    char input_char, input_message[MSG_MAX_LENGTH];

    printf("Enter message to be encrypted: ");

    int char_index = 0;

    while ((input_char = getchar()) != '\n')
    {
        input_message[char_index] = input_char;
        char_index++;
    }

    int shift_amount = 0;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");

    char encrypted_char;

    for (int i = 0; i < char_index; i++)
    {        
        encrypted_char =  input_message[i];

        if (encrypted_char >= 'a' && encrypted_char <= 'z')
            encrypted_char = ((encrypted_char - 'a') + shift_amount) % 26 + 'a';

        else if (encrypted_char >= 'A' && encrypted_char <= 'Z')        
            encrypted_char = ((encrypted_char - 'A') + shift_amount) % 26 + 'A';

        putchar(encrypted_char);
    }

    putchar("\n");

    return 0;
}