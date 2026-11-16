#include <stdio.h>

int main()
{
    int num, flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("The Number is Not Pronic!");
        return 0;
    }

    for (int i = 0; i * (i + 1) <= num; i++)
    {
        if (i * (i + 1) == num)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The Number is Pronic!");
    }
    else
    {
        printf("The Number is Not Pronic!");
    }

    return 0;
}
