#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main (void){
    float farrenheit, celsius;
    printf("Enter farrenheit temperature: \n");
    scanf("%f", &farrenheit);

    celsius = (farrenheit - FREEZING_POINT)*SCALE_FACTOR;

    printf("Celsius Equivalent: %1f\n", celsius);

    return 0;
}
