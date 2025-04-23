#include <stdio.h>

int main(void) {
    int item_num;
    float unit_price = 0.0f;
    int month, day, year;

    printf("Enter item number : ");
    scanf("%d", &item_num);

    printf("Enter unit price : ");
    scanf("%f", &unit_price);

    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item \t\t Unit  \t\t Purchase\n");
    printf("     \t\t Price \t\t Date\n");
    printf("%d   \t\t $ %.2f\t %02d/%02d/%d\n", item_num, unit_price, month, day, year);
}