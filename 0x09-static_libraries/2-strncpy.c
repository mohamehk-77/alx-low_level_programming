#include "main.h"
/**
 * *_strncpy - that copies a string
 * @dest: input string 1
 * @src: input string 2
 * @n: bytes
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0; a <  n && *(src + a) != '\0'; a++)
{
	*(dest + a) = *(src + a);
}

for (; a < n; a++)
{
	*(dest + a) = '\0';
}
return (dest);
}
