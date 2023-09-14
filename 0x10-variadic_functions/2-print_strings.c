#include "variadic_functions.h"
/**
 * print_strings - that prints strings, followed by a new line
 * @separator: 1
 * @n: 2
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int y = 0;
	char *hamo;

	va_start(arg, n);

	for (y = 0; y < n; y++)
	{
		hamo = va_arg(arg, char *);
		printf("%s", hamo == NULL ? "(nil)" : hamo);

		if (separator != NULL && y < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
