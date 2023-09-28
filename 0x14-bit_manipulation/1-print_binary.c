#include "main.h"
/**
 * print_binary - function
 * @n: a
 */
void print_binary(unsigned long int n)
{
	unsigned long int hamo = n;
	int momo = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((hamo >>= 1) > 0)
		momo++;

	while (momo >= 0)
	{
		((n >> momo) & 1) ? _putchar('1') : _putchar('0');
		momo--;
	}
}
