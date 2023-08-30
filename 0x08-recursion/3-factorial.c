#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: The input number
 * Return: Factorial of the number. If n is lower than 0, returns -1
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
