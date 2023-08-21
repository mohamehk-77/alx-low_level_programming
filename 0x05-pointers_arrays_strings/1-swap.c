#include "main.h"
/**
 * swap_int - that swaps the values of two integers
 * use two input parameters
 * @a: input integr 1
 * @b: input integr 2
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
