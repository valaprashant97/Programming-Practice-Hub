#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int size = right - left + 1;
    int *temp = malloc(size * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory allocation failed!");
        exit(1);
    }

    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = 0; i < size; i++)
    {
        arr[left + i] = temp[i];
    }

    free(temp);
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
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

    mergeSort(arr, 0, size - 1);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
