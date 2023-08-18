#include "main.h"
/**
 * print_diagonal - that draws a diagonal line
 * @n: the number of time the \ character
 * should printed
*/
void print_diagonal(int n)
{
int y, z;
if (n <= 0)
_putchar('\n');
else
{
for (y = 1; y <= n; y++)
{
for (z = 1; z <= y; z++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
