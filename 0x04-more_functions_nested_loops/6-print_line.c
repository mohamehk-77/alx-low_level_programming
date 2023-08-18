#include "main.h"
/**
 * print_line - that draws a straight line
 * @n: number of the times _ character
 * shuold be printed
*/
void print_line(int n)
{
int inchr;
if (n <= 0)
_putchar('\n');
else
{
for (inchr = 1; inchr <= n; inchr++)
_putchar('_');
_putchar('\n');
}
}
