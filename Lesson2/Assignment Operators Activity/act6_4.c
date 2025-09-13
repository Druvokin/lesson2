// Ask for a float number price then multiply the value of price by 1.1 to add a
// 10% increase using the *= operator. Print the final value in two decimal places.

#include <stdio.h>

int main(void)
{
    float price;

    printf("Enter the price: ");
    scanf("%f", &price);

    price *= 1.1;

    printf("The new price is %.2f\n", price);
    
    return 0;
}
