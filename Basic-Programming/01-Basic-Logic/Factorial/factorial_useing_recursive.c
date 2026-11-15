#include <stdio.h>
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact4(n-1);
}
void main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Number is negative");
    }else{
        printf("Factorial : %d", fact(n));
    }
}