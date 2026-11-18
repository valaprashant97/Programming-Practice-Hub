
#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int size)
{
    int max = arr[0];

    // Find maximum element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Create count array
    int *count = calloc((size_t)max + 1, sizeof(int));

    if (count == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Count occurrences
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    // Reconstruct sorted array
    int index = 0;

    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }

    free(count);
}

int main(void)
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    if (size <= 0)
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

    printf("Enter array elements (non-negative integers):\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < 0)
        {
            printf("Negative numbers are not supported!\n");
            free(arr);
            return 1;
        }
    }

    countingSort(arr, size);

    printf("Sorted array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}
