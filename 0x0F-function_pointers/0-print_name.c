#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - starting point
 * @f: 1
 * @name: 2
 * Return:
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL | f == NULL)
	{
		return;
		f(name);
	}
}
