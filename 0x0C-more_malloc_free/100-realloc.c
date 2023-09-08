#include "main.h"
/**
 * *_realloc - that reallocates a memory block
 * @*ptr: pointer
 * @new_size: 1
 * @old_size: 2
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *dulx;
unsigned int y;
char *copy = ptr;

if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
if (new_size == old_size)
{
	return (ptr);
}
dulx = malloc(new_size);

if (dulx == NULL)
{
	return (NULL);
	copy = ptr;
}
for (y = 0; y < old_size; y++)
{
	dulx[y] = copy[y];
}
free(ptr);
return (dulx);
}
