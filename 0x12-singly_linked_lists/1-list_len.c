#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: a pointer
 * Retrun: 0
*/
size_t list_len(const list_t *h)
{
	size_t arwo = 0;

	for (; h != NULL; h = h->next)
	{
		arwo++;
	}
	return (arwo);
}
