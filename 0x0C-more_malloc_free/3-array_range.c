#include "main.h"
/**
 * *array_range - that creates an array of integers.
 * @min: 1
 * @max: 2
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int elemnt;
	int y;
	int *dulx;

	if (min > max)
	{
		return (NULL);
	}
	elemnt = max - min + 1;
	dulx = malloc(sizeof(int) * elemnt);

	if (dulx == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < elemnt; y++)
	{
		dulx[y] = min + y;
	}
	return (dulx);
}
