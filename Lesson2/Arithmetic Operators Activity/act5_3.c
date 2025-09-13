// Write a program that takes in three integer inputs, x, y, and z, and prints their sum.

# include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("Sum: %d\n", x+y+z);

    return 0;
}
