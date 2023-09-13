#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - that executes a function
 * @array: 1
 * @size: 2
 * @action: 3
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *start;
	int *end;

	if (array == NULL || action == NULL)
	{
		return;
	}
	end = array + size;
	for (start = array; start < end; start++)
	{
		action(*start);
	}
}
