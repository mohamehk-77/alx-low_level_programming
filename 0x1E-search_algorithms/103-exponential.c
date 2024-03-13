#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    if (array[0] == value)
    {
        return 0;
    }

    int i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        i = i * 2;
    }

    int low = i / 2;
    int high = (size - 1 > low) ? size - 1 : low;

    printf("Value found between indexes [%d] and [%d]\n", low, high);
    print_array(array, low, high);

    return binary_search(array + low, high - low + 1, value);
}

int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
