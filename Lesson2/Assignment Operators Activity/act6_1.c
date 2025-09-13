// Write a program that asks for an integer number, adds 1, and
// assigns to the number using the += operator.

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("The updated number is: %d\n", num+=1);

    return 0;
}
