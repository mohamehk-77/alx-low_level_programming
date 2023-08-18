#include "main.h"
/**
 * print_square - that print a square use character #
 * @size: the size of the square
 * Return: Always 0 (success)
*/
void print_square(int size)
{
int a, b;
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
_putchar('#');
_putchar('\n');
}
}
