#include "main.h"
/**
 * *_memcpy - that fills memory with a constant byte
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: pointer of dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int ttr;

for (ttr = 0; ttr < n; ttr++)
{
	dest[ttr] = src[ttr];
}
return (dest);
}
