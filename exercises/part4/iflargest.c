#include <stdio.h>

int main(void) {
    int int1, int2, int3, int4;
    int largest, smallest;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &int1, &int2, &int3, &int4);


    if (int1 > int2) { largest = int1; smallest = int2; }
    else             { largest = int2; smallest = int1; }

    if (int3 > int4) {
        if (int3 > largest)  largest  = int3;
        if (int4 < smallest) smallest = int4;
    } else {
        if (int4 > largest)  largest  = int4;
        if (int3 < smallest) smallest = int3;
    }

    printf("Largest:  %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
