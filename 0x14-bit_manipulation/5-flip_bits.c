#include "main.h"
/**
 * flip_bits - function
 * @n: 1
 * @m: 2
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	unsigned long int flips = 0;

	while (bit)
	{
		flips += bit & 1;
		bit = bit >> 1;
	}
	return (flips);
}
