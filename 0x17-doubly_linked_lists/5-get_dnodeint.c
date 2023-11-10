#include "lists.h"
/**
 * get_dnodeint_at_index - that returns the nth node
 * @head: pointer
 * @index: 1
 * Return: 0
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_diff = 0;
	dlistint_t *main_pp = head;

	while (main_pp != NULL && node_diff < index)
	{
		main_pp = main_pp->next;
	}

	if (node_diff == index)
	{
		return (main_pp);
	}
	else
	{
		return (NULL);
	}
}
