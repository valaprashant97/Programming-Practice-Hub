// WAP to find a summation of a digit of a given number. (Iterative) 
#include <stdio.h>
void main()
{
    int n, last_dig, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        last_dig = n % 10;
        sum = sum + last_dig;
        n = n / 10;
    }
    printf("Sum of digits = %d\n", sum);
}