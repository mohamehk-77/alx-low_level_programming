#include <stdio.h>
#include <stdlib.h>

int interpolation_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    size_t low = 0;
    size_t high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (low == high)
        {
            if (array[low] == value)
            {
                return low;
            }
            else
            {
                return -1;
            }
        }

        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
        {
            return pos;
        }

        if (array[pos] < value)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
    }

    return -1;
}