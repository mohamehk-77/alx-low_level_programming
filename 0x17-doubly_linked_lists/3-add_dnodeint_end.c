#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of the list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value
 * Return: a new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *main_pointer = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (main_pointer->next != NULL)
	{
		main_pointer = main_pointer->next;
	}

	new_node->prev = main_pointer;
	main_pointer->next = new_node;

	return (new_node);
}
