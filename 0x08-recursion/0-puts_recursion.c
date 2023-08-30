#include "main.h"
/**
 * _puts_recursion - that print a string
 * @s: its pointer
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
}
