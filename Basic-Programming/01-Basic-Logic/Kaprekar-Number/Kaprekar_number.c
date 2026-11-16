
#include <stdio.h>

int main()
{
    int num, square, temp, divisor = 1;
    int right, left;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("The Number is Not Kaprekar!");
        return 0;
    }

    square = num * num;
    temp = square;

    while (temp > 0)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    right = square % divisor;
    left = square / divisor;

    if (left + right == num)
    {
        printf("The Number is Kaprekar!");
    }
    else
    {
        printf("The Number is Not Kaprekar!");
    }

    return 0;
}
