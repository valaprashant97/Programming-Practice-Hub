// WAP to find weather given number is Armstrong number is not. 
#include<stdio.h>
void main(){
    int n, last_dig, original, sum=0;
    printf("Enter a number :");
    scanf("%d", &n);

    original = n;

    while (n>0)
    {
        last_dig = n % 10;
        sum = sum + last_dig*last_dig*last_dig;
        n = n/10;
    }

    if(original == sum){
        printf("The number is armstrong");
    }else{
        printf("The number is not armstrong");
    }
}