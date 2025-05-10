#include <stdio.h>
int main(void)
{
    float commission, rival_commision, value, number_of_share, price_per_share;
    
    printf("Enter the number of share: ");
    scanf("%f", &number_of_share);

    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value = number_of_share * price_per_share;

    if (number_of_share < 2000)
        rival_commision = 0.03 * number_of_share;
    else
        rival_commision = 0.02 * number_of_share;
    
    rival_commision += 33;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;

    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;

    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;

    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;

    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;

    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Broker's Commission: $%.2f\n", commission);
    printf("Rival's Commission: $%.2f\n", rival_commision);

    return 0;
}