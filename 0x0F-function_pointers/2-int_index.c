#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - starting point
 * @array: 1
 * @size: 2
 * @cmp: 3
 * Return: dfult -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;
	int result = -1;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (y = 0; y < size && result == -1; y++)
	{
		if (cmp(array[y]) != 0)
			result = (y);
	}
	return (result);
}
