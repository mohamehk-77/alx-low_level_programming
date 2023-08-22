#include "main.h"
/**
 * puts2 - that print every character of string
 * @str: start of parameter input
*/
void puts2(char *str)
{
	int C;
for (C = 0; str[C] != '\0'; C++)
{
if (C % 2 == 0)
	_putchar(str[C]);
}
	_putchar('\n');
}
