#include <stdio.h>

#define PI 3.14f
#define FRACTION 4.0f/3.0f

int main (void){
    int radius;
    float volume;

    printf("Enter radius of the sphere: \n");
    scanf("%d",&radius);

    volume = FRACTION * PI * ( radius*radius*radius);
    printf("Volume of spehre with radius %d is %f \n",radius, volume);
}
