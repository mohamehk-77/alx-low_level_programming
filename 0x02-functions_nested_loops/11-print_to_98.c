#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The input number to check for print values.
*/
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d", x);
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d", x);
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
}
