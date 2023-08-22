#include "main.h"
/**
 * print_array - that prints n elements of an array of integers
 * @n: elements input
 * @a: string input
*/
void print_array(int *a, int n)
{
int s;
for (s = 0; s < n; s++)
{
if (s != (n - 1))
	printf("%d, ", *(a + s));
else
	printf("%d", *(a + s));
}
	printf("\n");
}
