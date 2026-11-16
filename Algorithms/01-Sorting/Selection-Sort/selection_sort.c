#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int size)
{
    int index;
    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i];
        index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main()
{
    int size;

    printf("Enter a size of Array: ");
    scanf("%d", &size);

    if (size <= 0)
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
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
