// Write a program that asks for three integer numbers, x, y, and z.
// add y and z to x, and assign it to x using the += operator.

#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    x += y + z;

    printf("Result: %d\n", x);
    
    return 0;
}
