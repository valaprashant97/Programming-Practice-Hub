#include <stdio.h>

void main()
{
    int a, b, remainder, quotient;

    printf("Enter a First Number : ");
    scanf("%d", &a);
    printf("Enter a Secound Number : ");
    scanf("%d", &b);

    int dividend = (a > b) ? a : b;
    int divisor = (a < b) ? a : b;

    remainder = dividend;

    while (remainder >= divisor)
    {
        remainder = remainder - divisor;
        quotient++;
    }

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
}