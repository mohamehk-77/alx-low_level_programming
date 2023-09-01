#include "main.h"
/**
 * f_prime_number - is a fun
 * @n: its prametr
 * @prime: its prametr
 * Return: the  prime number
*/
int f_prime_number(int n, int prime)
{
	if (prime == 1)
	{
		return (1);
	}
	if (n % prime == 0)
	{
		return (0);
	}
	return (f_prime_number(n, prime - 1));
}
/**
 * is_prime_number - is a fun
 * @n: its a parameter
 * Return: prime num
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (f_prime_number(n, n - 1));
}
