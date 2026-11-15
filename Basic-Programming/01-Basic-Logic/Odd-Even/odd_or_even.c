// WAP to find whether a number is Odd or Even without using %.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The Number is even");
    }
    else
    {
        printf("The Number is odd");
    }
}