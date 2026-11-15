// WAP to find a power a^b (with using multiplication operation)
#include<stdio.h>
void main(){
    int base, exponent,result;

    printf("Enter Base :");
    scanf("%d",base);
    printf("Enter Exponent :");
    scanf("%d",exponent);

    for (int i = 0; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("Power = %d", result);
}