// WAP to find a total odd and total even digit of a given number.

#include <stdio.h>

void main()
{
    int n, last_dig, odd_count = 0, even_count = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        last_dig = n % 10;
        if (last_dig % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        n = n / 10;
    }

    printf("Total Even Digits = %d\n", even_count);
    printf("Total Odd Digits = %d\n", odd_count);
}