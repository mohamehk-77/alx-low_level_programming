#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * jump_search - fanc
 * Jump search is an algorithm used to search for a target value in a sorted array.
 * It works by making jumps of fixed size (square root of the array size) and
 * performing linear search within each segment until the target value is found or
 * until the end of the array is reached.
 *
 * Parameters:
 *   - array: A pointer to the sorted array to search.
 *   - size: The number of elements in the array.
 *   - value: The value to search for in the array.
 *
 * Returns:
 *   - The index of the target value in the array if found, or -1 if not found.
 *
 * Note: The array must be sorted in ascending order for the jump search algorithm to work correctly.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[(size_t)fmin(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == (size_t)fmin(step, size))
		{
			return (-1);
		}
	}

	if (array[prev] == value)
	{
		return (prev);
	}

	return (-1);
}
