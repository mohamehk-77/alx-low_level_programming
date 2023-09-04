#include "main.h"
/**
 * *_strpbrk - that searches a string for any of a set of bytes
 * @s: pointerS
 * @accept: bytes
 * Return: pointer of s
*/
char *_strpbrk(char *s, char *accept)
{
int ihr, jhr;
char *p;

ihr = 0;
while (*(ihr + s) != '\0')
{
	jhr = 0;
	while (*(jhr + accept) != '\0')
	{
		if (*(ihr + s) == *(jhr + accept))
		{
			p = &*(ihr + s);
			return (p);
		}
		jhr++;
	}
	ihr++;
}
return (0);
}
