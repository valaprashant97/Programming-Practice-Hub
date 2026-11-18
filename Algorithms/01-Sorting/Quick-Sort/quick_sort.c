
#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, size - 1);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
