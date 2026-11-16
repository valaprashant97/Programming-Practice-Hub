
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, key, count = 0;

    printf("Enter a size: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size!");
        return 1;
    }

    int *arr = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter a Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter a Key: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("The Number is Not Found");
    }
    else
    {
        printf("The Number is Found");
    }

    free(arr);

    return 0;
}