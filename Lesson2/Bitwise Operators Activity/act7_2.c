// Write a program that asks for an integer N, and then do the AND operator with
// N and 25. Print the result in the format: N AND 25 = ?

#include <stdio.h>

int main(void)
{
    unsigned int N;

    printf("Enter an integer: ");
    scanf("%u", &N);

    printf("%u AND 25 = %u\n", N, N & 25);
    return 0;
}
