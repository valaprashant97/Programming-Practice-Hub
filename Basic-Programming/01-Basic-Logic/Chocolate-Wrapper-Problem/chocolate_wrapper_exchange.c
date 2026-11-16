
#include <stdio.h>

int main()
{
    int n, m, k;
    int chocolates, wrappers, freeChocolates;

    printf("Enter Total Money: ");
    scanf("%d", &n);

    printf("Enter Chocolate Price: ");
    scanf("%d", &m);

    printf("Enter Wrapper Exchange Value: ");
    scanf("%d", &k);

    if (n < 0 || m <= 0 || k <= 1)
    {
        printf("Invalid Input!");
        return 1;
    }

    chocolates = n / m;
    wrappers = chocolates;

    while (wrappers >= k)
    {
        freeChocolates = wrappers / k;

        chocolates = chocolates + freeChocolates;

        wrappers = (wrappers % k) + freeChocolates;
    }

    printf("Total Chocolates: %d", chocolates);

    return 0;
}
