#include <stdio.h>


int main(void)
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);

    int y = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("The result is : %d \n", y);
}
