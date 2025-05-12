#include <stdio.h>

int main(void)
{
    int f;
    float epsilon, e = 0;

    printf("Enter the value of ε: ");
    scanf("%f", &epsilon);

    for (int i = 1; e <= epsilon; i++) {
        f = 1;

        for (int j = 1; j <= i; j++) {
            f *= j;
        }

        e += 1/f;
    }

    printf("The value e for ε = %f: %.3f\n", epsilon, e);

    return 0;
}