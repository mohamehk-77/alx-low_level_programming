#include "main.h"
/**
 * rev_string -  that prints every other character of a string
 * @str: starting point
 * @end: ending point
 * @s: is a string
*/
void rev_string(char *s)
{
	int str = 0;
	int end = strlen(s) - 1;

	while (str < end)
	{
		char tm = s[star];

		s[str] = s[end];
		s[end] = s[tm];
		str++;
		end--;
	}
	_putchar('\n');
}
