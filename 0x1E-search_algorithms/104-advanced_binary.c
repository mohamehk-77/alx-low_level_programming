#include <stdio.h>

void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
    {
        return -1;
    }

    return advanced_binary_helper(array, 0, size - 1, value);
}

int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    print_array(array, low, high); // Print sub-array for each iteration

    if (array[mid] == value)
    {
        // Check if the element on the left is also equal to the value
        size_t left = mid - 1;
        while (left >= 0 && array[left] == value)
        {
            left--;
        }
        return left + 1;
    }
    else if (array[mid] < value)
    {
        return advanced_binary_helper(array, mid + 1, high, value);
    }
    else
    {
        return advanced_binary_helper(array, low, mid - 1, value);
    }
}
