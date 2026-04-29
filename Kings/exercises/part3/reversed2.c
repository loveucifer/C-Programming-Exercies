#include <stdio.h>

int main(void){
    int number;
    printf("Enter a two-digit number: \n");
    scanf("%d" ,&number);

    int last_digit = number %10;
    int first_digit = number /10;

    printf("The reversed number is: %d%d\n",last_digit,first_digit);

    return 0;
}
