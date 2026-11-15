// WAP to find whether a number is Odd or Even without using a % operator. 
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n & 1){
        printf("The Number is odd");
    }else{
        printf("The Number is even");
    }
}