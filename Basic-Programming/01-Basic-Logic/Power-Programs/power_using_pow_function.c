
#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    double result;

    printf("Enter Base: ");
    scanf("%d", &base);

    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf("Power = %f", result);

    return 0;
}
