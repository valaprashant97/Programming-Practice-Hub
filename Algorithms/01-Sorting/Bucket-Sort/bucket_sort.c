
#include <stdio.h>
#include <stdlib.h>

void bucketSort(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int bucketCount = max + 1;

    int *bucket = calloc(bucketCount, sizeof(int));

    if (bucket == NULL)
    {
        printf("Memory allocation failed!");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        bucket[arr[i]]++;
    }

    int index = 0;

    for (int i = 0; i < bucketCount; i++)
    {
        while (bucket[i] > 0)
        {
            arr[index++] = i;
            bucket[i]--;
        }
    }

    free(bucket);
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
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] < 0)
        {
            printf("Only non-negative numbers are allowed!");
            free(arr);
            return 1;
        }
    }

    bucketSort(arr, size);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
