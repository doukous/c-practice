#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2;
    float first_frac, second_frac, final_result;
    char choosen_operator;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &choosen_operator, &num2, &denom2);   

    first_frac = (float) num1 / denom1;
    second_frac = (float) num2 / denom2;

    switch (choosen_operator)
    {
    case '+':
        final_result = first_frac + second_frac;
        break;

    case '-':
        final_result = first_frac - second_frac;
        break;

    case '*':
        final_result = first_frac * second_frac;
        break;

    case '/':
        final_result = first_frac / second_frac;
        break;

    }
    
    printf("The result is %.3f\n", final_result);
}