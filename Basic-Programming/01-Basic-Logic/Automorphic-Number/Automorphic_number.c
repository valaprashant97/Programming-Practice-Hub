// WAP to find weather given number is Automorphic or not. 
// An automorphic number is a number whose square ends with the same digits as the number itself.  
// For example, 5 is automorphic because 5² = 25, which ends in 5.  
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.

#include <stdio.h>

int main()
{
    int num, square, temp, divisor = 1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("The Number is Not Automorphic!");
        return 0;
    }

    square = num * num;
    temp = num;

    while (temp > 0)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (square % divisor == num)
    {
        printf("The Number is Automorphic!");
    }
    else
    {
        printf("The Number is Not Automorphic!");
    }

    return 0;
}
