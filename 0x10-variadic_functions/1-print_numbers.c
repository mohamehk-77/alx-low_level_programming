#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to print between numbers.
 * @n: Number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int y;
	int number;
	va_start(arg, n);

	for (y = 0; y < n; y++)
	{
		number = va_arg(arg, int);
		printf("%d", number);

		if (y != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
