#include "main.h"
/**
 * *malloc_checked - that allocates memory using malloc
 * @b: size of memory
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *dulx;

	dulx = malloc(b);

if (dulx == NULL)
{
	exit(98);
}
return (dulx);
}
