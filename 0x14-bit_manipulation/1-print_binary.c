#include "main.h"
/**
 * print_binary - that print binary
 * @n: intgers
*/
void print_binary(unsigned long int n)
{
	int print = sizeof(n) * 8 - 1;
	int trans = 0;
	unsigned long int bit;

	while (print >= 0)
	{
		bit = (n >> print) & 1;
		if (bit)
		{
			trans = 1;
			putchar('1');
		}
		else if (trans)
		{
			putchar('0');
		}
		trans--;
	}
	if (!trans)
	{
		putchar('0');
	}
}
