#include "lists.h"
/**
 * print_list -  that prints all the elements of a list_t list
 * @h: a pointer
 * Return: Always 0
*/
size_t print_list(const list_t *h)
{
	size_t print = 0;

	for (; h != NULL; h = h->next, print++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
	}
	return (print);
}
