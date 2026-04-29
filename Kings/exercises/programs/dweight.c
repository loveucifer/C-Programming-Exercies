#include <stdio.h>

int main(void){
    int height , length , width , volume , weight;
    printf("Enter height of a box: \n");
    scanf("%d", &height);
    printf("Enter length of a box: \n");
    scanf("%d", &length);
    printf("Enter width of a box: \n");
    scanf("%d", &width);

    volume = height * width * length;
    weight = (volume + 165)/166;

    printf("Volume in cubic inches is %d \n", volume);
    printf("Dimensional Weight in pounds is %d \n", weight);

    return 0;

}
