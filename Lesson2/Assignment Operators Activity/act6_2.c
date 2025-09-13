// Write a program that asks for two integer numbers, x, and y. Then,
// add y to x, and assign it to x using the += operator.

#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    x += y;

    printf("Result: %d\n", x);
    return 0;

}
 
