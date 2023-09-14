#include "variadic_functions.h"

/**
 * sum_them_all - that returns the sum of all its parameters
 * @n: 1
 * Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int y;

	va_start(arg, n);

	for (y = 0; y < n; y++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
