#include "main.h"
/**
 * *_strncat - that concatenates two strings use at most n bytes from src
 * @dest: input string 1
 * @src: input string 2
 * @n: bytes from sec
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int s = 0;
while (*(dest + a) != '\0')
{
	a++;
}
while (*(dest + a) != '\0' && s < n)
{
	*(dest + a) = *(src + s);
	a++;
	s++;
}
*(dest + a) = '\0';
return (dest);
}
