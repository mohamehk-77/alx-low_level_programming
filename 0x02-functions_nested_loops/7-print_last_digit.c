#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @index: The input number
 *
 * Return: The last digit number
*/
int print_last_digit(int index)
{
	int last = index % 10;

	if (index < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
