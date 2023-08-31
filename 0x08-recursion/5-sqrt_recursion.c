#include "main.h"
/**
 * s_sqrt_ - its fun
 * @n: its prametr
 * @m: its prametr
 * Return: the square root
*/
int s_sqrt_(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	else
	{
		return (s_sqrt_(n, m + 1));
	}
}
/**
 * _sqrt_recursion - its a fun
 * @n: its prametr
 * Return: the square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (s_sqrt_(n, 0));
}
