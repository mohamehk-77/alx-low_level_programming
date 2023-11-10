#include "lists.h"
/**
 * free_dlistint - that free a dlistint_t
 * @head: pointer
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
		head = NULL;
}
