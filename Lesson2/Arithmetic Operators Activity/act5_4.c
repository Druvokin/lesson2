// Write a program that accepts two integer inputs, x, and y. Show the output
// when x is added by, and also, when x is subtracted by y.

#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);

    return 0;
}
