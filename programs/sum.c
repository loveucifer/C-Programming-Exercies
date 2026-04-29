#include <stdio.h>
int main(void){
    int n , sum =0;
    printf("Enter integers from 0 to terminate ");
    scanf("%d", &n);
    while (n!=0){
        sum +=n;
        scanf("%d", &n);
    }
    printf("The sum is : %d\n", sum);
    return 0;
}
