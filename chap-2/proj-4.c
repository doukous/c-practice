#include <stdio.h>
#define TAX_PERCENTAGE 5.0f

int main(void) {
    float value = 0.0f;

    printf("Enter an amount : ");
    scanf("%f", &value);

    printf("With tax added : %.2f \n", value + (value * TAX_PERCENTAGE) / 100);
}