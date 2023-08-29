#include "main.h"
/**
 * *_strchr - that locates a character in a string
 * @s: pointer
 * @c: constant
 * Return: pointer to s
*/
char *_strchr(char *s, char c)
{
int ttr;

for (ttr = 0; s[ttr] >= '\0' ; ttr++)
{
	if (s[ttr] == c)
	{
		return (s + ttr);
	}
}
	return ('\0');
}
