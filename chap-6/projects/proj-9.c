#include <stdio.h>


int main(void)
{
    float loan, interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    balance = loan;

    printf("Enter interset rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_rate = interest_rate / (12 * 100);

    for (int i = 0; i < 3; i++)
    {
        balance = balance - monthly_payment + (balance * interest_rate);
        printf("\nBalance remaining after payment on month %d: $%.2f \n", i + 1, balance);
    }
    
    return 0;
}