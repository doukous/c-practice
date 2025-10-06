#include <stdio.h>

float compute_tax(float income);

int main(void) {
    printf("Enter the income: ");
    float value;
    scanf("%f", &value);
    printf("Tax due : %.3f\n", compute_tax(value));
}

float compute_tax(float income) {
    float tax_due;

    if (income < 750)
        tax_due = income * 0.01;
    
    else if (income < 2250)
        tax_due = 7.5 + income * 0.02;

    else if (income < 3750)
        tax_due = 37.5 + income * 0.03;

    else if (income < 5250)
        tax_due = 82.5 + income * 0.04;
    
    else if (income < 7000)
        tax_due = 142.5 + income * 0.05;
    
    else
        tax_due = 230 + income * 0.06;
    
    return tax_due;
}