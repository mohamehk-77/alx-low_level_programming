#include "lists.h"
/**
 * get_dnodeint_at_index - that returns the nth node
 * @head: pointer
 * @index: 1
 * Return: null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
