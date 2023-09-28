#include "main.h"
/**
 * get_bit -func
 * @n: 1
 * @index: 2
 * Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int git = 1UL << index;
	int bit = (n & git) >> index;

	return (bit);
}
