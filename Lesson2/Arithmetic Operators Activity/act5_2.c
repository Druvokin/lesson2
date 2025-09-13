// Write a program that takes two numbers, x, and y, as input from the user
// and prints the quotient when x is divided by y.

#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("Quotient: %d\n", x/y);

    return 0;
}
