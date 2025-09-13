// Write a program that prints the result of 12 OR 25. Print the result only.

#include <stdio.h>

int main(void)
{
    unsigned int x = 12, y = 25, result;
    // 12 in binary is 00001100 ; 25 in binary is 00011001.
    // 29 in binary is 00011101 ; if atleast either of the bit is 1, return 1 otherwise 0.
    result = x | y;

    printf("%u\n", result);
    
    return 0;

}
