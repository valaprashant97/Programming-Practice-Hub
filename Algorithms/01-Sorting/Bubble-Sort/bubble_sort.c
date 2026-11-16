
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;

    printf("Enter a size of Array: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid array size!");
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

        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input!");
            free(arr);
            return 1;
        }
    }

    bubbleSort(arr, size);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
