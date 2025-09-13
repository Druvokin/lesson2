// Write a program that takes in a float Celsius, and displays its equivalent value in
// Fahrenheit in two decimal places. The formula is as follows: F = C x (9/5) + 32.

#include <stdio.h>

#define FREEZING_PT 32.0f
# define SCALE_FACTOR (9.0f / 5.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * SCALE_FACTOR) + FREEZING_PT;

    printf("Temperature in fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
