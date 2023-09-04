#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: number to check
 * Return: absolute value.
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = 0 - n;
	}
	return (n);
}

