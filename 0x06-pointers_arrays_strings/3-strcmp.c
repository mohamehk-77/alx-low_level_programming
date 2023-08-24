#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: The difference between the first differing characters.
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
{
	a++;
}

return (s1[a] - s2[a]);
}
