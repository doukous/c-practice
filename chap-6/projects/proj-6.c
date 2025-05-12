#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 2; i * i <= number; i += 2)
        printf("%d\n", i * i);
    
    return 0;
}