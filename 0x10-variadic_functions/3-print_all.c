#include "variadic_functions.h"
/**
 * print_all - Prints arguments based on a format string.
 * @format: A format string.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *ptr;
	int i = 0;

	va_start(arg, format);
	while (format && *(format + i))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				ptr = va_arg(arg, char *);
				if ((!ptr) == NULL)
					ptr = "(nil)";
				printf("%s", ptr);
				break;
			default:
				i++;
				continue;
		}
		if (*(format + 1))
			printf(", ");
		i++;
	}
	va_end(arg);
	printf("\n");
}
