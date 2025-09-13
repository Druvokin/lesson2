// Write a program that asks for two integers, x, and y.
// Swap the two numbers using bitwise oeprators.

#include <stdio.h>

int main(void)
{
    unsigned int x, y;

    printf("Enter the first number: ");
    scanf("%u", &x);
    printf("Enter the second number: ");
    scanf("%u", &y);

    printf("Before swap: x = %u, y = %u\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After swap: x = %u, y = %u\n", x, y);
    return 0;
}
