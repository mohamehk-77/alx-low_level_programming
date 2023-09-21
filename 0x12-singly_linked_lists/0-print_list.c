#include "lists.h"
/**
 * print_list -  that prints all the elements of a list_t list
 * @h: a pointer
 * Return: Always 0
*/
size_t print_list(const list_t *h)
{
	const list_t *moo = h;
	size_t print = 0;

	for (moo = h; moo != NULL; moo = moo->next)
	{
		moo->str ? printf("[%d] %s\n", moo->len, moo->str) : printf("[0] (nil)\n");
		print++;
	}
	return (print);
}
