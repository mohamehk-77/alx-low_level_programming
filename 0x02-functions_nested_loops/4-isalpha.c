#include "main.h"
/**
 * _isalpha - Checking for alphabetic character.
 * @c: The character to check.
 *
 * Return: (1) if c is letter, lowercase or uppercase, otherwise return (0).
*/
int _isalpha(int c)
{
	if (islower(c) || isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
