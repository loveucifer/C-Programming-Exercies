#include <stdio.h>

int main(void)
{
    float amount, taxed_amount;
    printf("enter amount in dolalrs and cents ( 100.500 ) \n");
    scanf("%f", &amount);
    taxed_amount = amount + ( amount * 0.05);
    printf("With tax added : %f \n", taxed_amount);

}
