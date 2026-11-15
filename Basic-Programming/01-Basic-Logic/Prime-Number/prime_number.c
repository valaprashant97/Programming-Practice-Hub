// WAP to Find Whether a Number is Prime or Not
#include<stdio.h>
void main(){
    int n, count=0;
    printf("Enter a Number : ");
    scanf("%d",n);

    for(int i =1; i<=n;i++){
        if(n%i == 0){
            count++;
        }
    }

    if(count == 2){
        printf("The Nunber is Prime Number");
    }else{
        printf("The Number is Not a Prime Numeber");
    }
}