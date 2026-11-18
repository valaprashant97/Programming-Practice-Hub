
#include <stdio.h>
#include <stdlib.h>

int getMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void countingSort(int arr[], int size, int exp)
{
    int *output = malloc((size_t)size * sizeof(int));
    int count[10] = {0};

    if (output == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Count digit occurrences
    for (int i = 0; i < size; i++)
    {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    // Calculate cumulative count
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    // Build output array
    for (int i = size - 1; i >= 0; i--)
    {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy output to original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }

    free(output);
}

void radixSort(int arr[], int size)
{
    int max = getMax(arr, size);

    // Sort by each digit position
    for (int exp = 1; max / exp > 0; )
    {
        countingSort(arr, size, exp);

        if (exp > max / 10)
        {
            break;
        }

        exp *= 10;
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

    printf("Enter non-negative array elements:\n");

    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) != 1 || arr[i] < 0)
        {
            printf("Invalid input! Enter non-negative integers only.\n");
            free(arr);
            return 1;
        }
    }

    radixSort(arr, size);

    printf("Sorted array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}
