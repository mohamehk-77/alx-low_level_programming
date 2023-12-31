#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - starting point
 * @f: 1
 * @name: 2
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
