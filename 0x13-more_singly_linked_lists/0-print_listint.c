#include "lists.h"
/**
 * print_listint -  that prints all the elements
 * @h: Pointer
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
