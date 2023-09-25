#include "lists.h"

/**
 * listint_len - function to count the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t arwo = 0;

	for (; h != NULL; h = h->next)
	{
		arwo++;
	}
	return (arwo);
}
