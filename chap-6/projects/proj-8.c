#include <stdio.h>

int main(void)
{
    int num_of_days, starting_day, column_num;

    printf("Enter number of days in month: ");
    scanf("%d", &num_of_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (column_num = 1; column_num < starting_day; column_num++)
    {
        printf("\t");
    }

    for (int i = 1; i <= num_of_days; i++, column_num++)
    {
        if (column_num % 7 - 1 == 0)
        {
            printf("\n");
        }
        
        printf("%d\t", i);
    }    
}