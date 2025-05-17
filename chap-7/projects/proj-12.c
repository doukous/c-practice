#include <stdio.h>


int main(void)
{
    char first_operator, second_operator;
    float first_num, second_num, third_num, result;

    printf("Enter an expression: ");
    scanf(
        "%f%c%f%c%f", 
        &first_num, 
        &first_operator, 
        &second_num, 
        &second_operator, 
        &third_num
    );

    switch (first_operator)
    {
    case '+':
        result = first_num + second_num;
        break;
    
    case '-':
        result = first_num - second_num;
        break;
    
    case '*':
        result = first_num * second_num;
        break;
    
    case '/':
        result = first_num / second_num;
        break;
    }

    switch (second_operator)
    {
    case '+':
        result += third_num;
        break;
    
    case '-':
        result -= third_num;
        break;
    
    case '*':
        result *= third_num;
        break;
    
    case '/':
        result /= third_num;
        break;
    }

    printf("Value of the expression: %.2f\n", result);
}