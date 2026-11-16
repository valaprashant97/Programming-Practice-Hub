
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, key;

    printf("Enter a size: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size!");
        return 1;
    }

    int *arr = malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter a Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter a Key: ");
    scanf("%d", &key);

    int l = 0, r = size - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (arr[mid] == key)
        {
            printf("The Number is Found at index %d", mid);
            break;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (l > r)
    {
        printf("The Number is Not Found");
    }

    free(arr);

    return 0;
}
