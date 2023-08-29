#include "main.h"
/**
 * _memset -  that fills memory with a constant byte
 * @s: pointer
 * @b: constant
 * @n: pointer s
 * Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int ttr;

for (ttr = 0; n > 0; ttr++, n--)
{
	s[ttr] = b;
}
return (s);
}
