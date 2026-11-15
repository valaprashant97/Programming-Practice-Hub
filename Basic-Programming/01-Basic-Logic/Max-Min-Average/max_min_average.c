// WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value should be taken from user (Note that you are not allowed to use an array for this) 

#include<stdio.h>

void main(){
    int size, max, min, num, sum=0;
    printf("Enter a Size : ");
    scanf("%d", size);

    for(int i=1; i<size; i++){
        printf("Enter Numer %d : ",i);
        scanf("%d", &num);

        if(num == 1){
            max == num;
            min == num;
        }else{
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
        }
        sum = sum + num;
    }
    float avg = (float)sum / size;

    printf("\nMaximum number = %d", max);
    printf("\nMinimum number = %d", min);
    printf("\nSum = %d", sum);
    printf("\nAverage = %f", avg);
}