// WAP to find a prime number between range (range should be entered by user).
#include <stdio.h>
void main()
{
    int start, end, count;

    printf("Enter Starting Range: ");
    scanf("%d", &start);

    printf("Enter Ending Range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        count = 0;
        if (i > 1)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("%d", i);
            }
        }
    }
}