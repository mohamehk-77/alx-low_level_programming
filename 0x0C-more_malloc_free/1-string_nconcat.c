#include "main.h"
#include <stdio.h>
/**
 * _strlen - that returns the length of a string.
 * @s: sting input
 * Return: length of string
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
	length++;
	s++;
}
return (length);
}

/**
 * *string_nconcat - that concatenates two strings.
 * @s1: 1
 * @s2: 2
 * @n: the first n bytes of s2, and null terminated
 * Return: pointer to string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int y, h, num;
char *dulx;
num = n;
if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
if (num >= _strlen(s2))
num = _strlen(s2);

dulx = malloc(sizeof(char) * (num + _strlen(s1) + 1));

if (dulx == NULL)
{
	return (NULL);
}
else
{
	for (y = 0; s1[y] != '\0'; y++)
{
	dulx[y] = s1[y];
}
for (h = 0; h < num; h++)
{
	dulx[h + y] = s2[h];
}
dulx[h + y] = '\0';
return (dulx);
}
}
