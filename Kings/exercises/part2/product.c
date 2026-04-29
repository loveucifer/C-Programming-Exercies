#include <stdio.h>

int main(void) {
    int item;
    float price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    printf("%-8d\t$%7.2f\t\t%02d/%02d/%04d\n",
           item, price, month, day, year);

    return 0;
}
