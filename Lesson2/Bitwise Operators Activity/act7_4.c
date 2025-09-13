// Write a program that asks for two integers X and Y, and then right-shift X by Y.
// Print the result in the format: X >> Y = ?

#include <stdio.h>

int main(void)
{
    unsigned int X, Y;

    printf("Enter X: ");
    scanf("%u", &X);
    printf("Enter Y: ");
    scanf("%u", &Y);

    printf("%u >> %u = %u\n", X, Y, X>>Y);

    return 0;
}
