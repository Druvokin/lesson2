// Write a program that asks for two integers X and Y, and then do the AND
// operator with them. Print the result in the format: X AND Y = ?

#include <stdio.h>

int main(void)
{
    unsigned int X, Y;

    printf("Enter the first integer: ");
    scanf("%u", &X);
    printf("Enter the second integer: ");
    scanf("%u", &Y);

    printf("%u AND %u = %u\n", X, Y, X & Y);
    
    return 0;
}
