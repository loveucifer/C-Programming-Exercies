#include <stdio.h>

int main(void) {
    double loan, rate, payment;
    double monthly_rate;
    double balance;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);

    printf("Enter interest rate: ");
    scanf("%lf", &rate);

    printf("Enter monthly payment: ");
    scanf("%lf", &payment);

    monthly_rate = rate / 100.0 / 12.0;

    // First month
    balance = loan - payment + (loan * monthly_rate);
    printf("Balance remaining after first payment: %.2f\n", balance);

    // Second month
    balance = balance - payment + (balance * monthly_rate);
    printf("Balance remaining after second payment: %.2f\n", balance);

    // Third month
    balance = balance - payment + (balance * monthly_rate);
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}
