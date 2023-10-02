listint_t *add_nodeint_end(listint_t **head, const int n);listint_t *add_nodeint_end(listint_t **head, const int n);#include "lists.h"
/**
 * list_len - func
 * @h: pointer
 * Return: 0
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
