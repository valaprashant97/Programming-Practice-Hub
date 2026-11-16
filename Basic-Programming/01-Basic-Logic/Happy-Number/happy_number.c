
#include <stdio.h>

int main()
{
    int num, temp, sum;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("The Number is Not Happy!");
        return 0;
    }

    temp = num;

    while (temp != 1 && temp != 4)
    {
        sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum = sum + (digit * digit);
            temp = temp / 10;
        }

        temp = sum;
    }

    if (temp == 1)
    {
        printf("The Number is Happy!");
    }
    else
    {
        printf("The Number is Not Happy!");
    }

    return 0;
}
