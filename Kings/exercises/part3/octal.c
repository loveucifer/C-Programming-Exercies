#include <stdio.h>
int main(void){
    int number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    int d1, d2, d3, d4, d5;

    d1 = number % 8;        // last digit
    number = number / 8;

    d2 = number % 8;
    number = number / 8;

    d3 = number % 8;
    number = number / 8;

    d4 = number % 8;
    number = number / 8;

    d5 = number % 8;        // first digit

    printf("In octal, your number is: %d%d%d%d%d\n", d5, d4, d3, d2, d1);

    return 0;
}
