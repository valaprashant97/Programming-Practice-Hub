
#include <stdio.h>
#include <stdlib.h>

void shellSort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

int main(void)
{
    int size;

    printf("Enter array size: ");

    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int *arr = malloc((size_t)size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter array elements:\n");

    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input!\n");
            free(arr);
            return 1;
        }
    }

    shellSort(arr, size);

    printf("Sorted array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}
