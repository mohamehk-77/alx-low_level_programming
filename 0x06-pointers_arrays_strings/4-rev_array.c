#include "main.h"
/**
 * reverse_array - Reverses the content of an integer array.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{

int start = 0;
int end = n - 1;
int temp;

	while (start < end)
	{
		temp = *(start + a);
		*(start + a) = *(end + a);
		*(end + a) = temp;
		start++;
		end--;
	}
}
