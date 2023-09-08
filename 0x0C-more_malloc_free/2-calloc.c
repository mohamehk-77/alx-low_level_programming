#include "main.h"
/**
 * *_calloc - that allocates memory for an array, using malloc
 * @size: 1
 * @nmemb: 2
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int mo_size, y;
	char *dulx;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mo_size = nmemb * size;
	dulx = malloc(mo_size);

	if (dulx == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < mo_size; y++)
	{
		dulx[y] = 0;
	}
	return (dulx);
}
