#include "main.h"
/**
 * _islower - Checking for lowercase character
 * @c: The character to check.
 *
 * Return: (1) if c is lowercase, otherwise return (0).
*/
int _islower(int c)
{
	if (islower(c) || isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
