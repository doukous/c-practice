#include <stdio.h>

int main(void)
{
    float income_amount, tax_due;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income_amount);

    if (income_amount < 750)
        tax_due = income_amount * 0.01;
    
    else if (income_amount < 2250)
        tax_due = 7.5 + income_amount * 0.02;

    else if (income_amount < 3750)
        tax_due = 37.5 + income_amount * 0.03;

    else if (income_amount < 5250)
        tax_due = 82.5 + income_amount * 0.04;
    
    else if (income_amount < 7000)
        tax_due = 142.5 + income_amount * 0.05;
    
    else
        tax_due = 230 + income_amount * 0.06;
    
    printf("Tax due : %.2f\n", tax_due);
}