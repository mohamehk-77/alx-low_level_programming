#include "main.h"
/*
 * prin*t_most_numbers - print 0 -9 excpt 2 , 4
 * use _putchar fanctions
 * Return: Aways 0 (success)
*/

void print_most_numbers(void)
{
	int num = 0;

		while (num <= 9)
		{
			if (num != 2 && num != 4)
			{
				_putchar(num + '0');
			}
				num++;
		}
				_putchar('\n');
}
