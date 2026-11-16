
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("The Number is Not Ugly!");
        return 0;
    }

    while (num % 2 == 0)
    {
        num = num / 2;
    }

    while (num % 3 == 0)
    {
        num = num / 3;
    }

    while (num % 5 == 0)
    {
        num = num / 5;
    }

    if (num == 1)
    {
        printf("The Number is Ugly!");
    }
    else
    {
        printf("The Number is Not Ugly!");
    }

    return 0;
}
