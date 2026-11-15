// WAP to find a summation of a digit of a given number. (recursive) 
#include <stdio.h>
int sumOfDigits(int n){
    return n%10 + sumOfDigits(n/10);
}

void main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    printf("Sum of digits = %d\n", sumOfDigits(n));
}