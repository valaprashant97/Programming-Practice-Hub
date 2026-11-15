
#include <stdio.h>

int main()
{
    int base, exponent, result = 1;

    printf("Enter Base: ");
    scanf("%d", &base);

    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++)
    {
        int temp = 0;

        for (int j = 1; j <= base; j++)
        {
            temp = temp + result;
        }

        result = temp;
    }

    printf("Power = %d", result);

    return 0;
}
