#include <stdio.h>
void main()
{
    int n, fac = 1;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Number is negative");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fac = fac * i;
        }
    }
    printf("%d", fac);
}