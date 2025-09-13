// program that calculates kmph and distance of hours traveled.

#include <stdio.h>

#define MILES_IN_KM 0.621371

int main(void)
{
    float kmph;
    int hours;

    printf("Enter kilometers per hour: ");
    scanf("%f", &kmph);
    printf("Enter number of hours traveled: ");
    scanf("%d", &hours);

    float distance;
    distance = kmph * hours; // get distance by multiplying kmph & hours and assigning to a variable.
    distance *= MILES_IN_KM; // convert distance to miles

    printf("Distance in miles: %.3f\n", distance);
    return 0;
}
