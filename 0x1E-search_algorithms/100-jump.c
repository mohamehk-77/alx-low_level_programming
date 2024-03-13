#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    size_t step = sqrt(size);
    size_t prev = 0;

    while (array[min(step, size) - 1] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev = step;
        step += sqrt(size);
        if (prev >= size)
        {
            return -1;
        }
    }

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev++;
        if (prev == min(step, size))
        {
            return -1;
        }
    }

    if (array[prev] == value)
    {
        return prev;
    }

    return -1;
}
