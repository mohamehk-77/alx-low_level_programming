#include "main.h"
/**
 * _strspn - that do somethink
 * @s: is a string
 * @accept: the bytes
 * Return: unsignend int..
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ttr, nrr;

	for (ttr = 0; *(ttr + s) != '\0'; ttr++)
	{
		for (nrr = 0; *(nrr + accept) != *(ttr + s); nrr++)
		{
			if (*(nrr + accept) == '\0')
				return (ttr);
		}
	}
				return (ttr);
}
