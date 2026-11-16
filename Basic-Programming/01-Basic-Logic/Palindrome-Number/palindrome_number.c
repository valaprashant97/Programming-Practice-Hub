
#include <stdio.h>

int main()
{
    int num, temp, reverse = 0, remainder;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("The Number is Not Palindrome!");
        return 0;
    }

    temp = num;

    while (temp > 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }

    if (num == reverse)
    {
        printf("The Number is Palindrome!");
    }
    else
    {
        printf("The Number is Not Palindrome!");
    }

    return 0;
}