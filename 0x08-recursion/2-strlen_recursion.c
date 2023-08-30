#include "main.h"
/**
 * _strlen_recursion - that returns the length of a string
 * @s: its pointer
 * Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
