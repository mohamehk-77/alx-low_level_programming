#include "lists.h"
/**
 * add_nodeint - add a new node at the first of the line
 * @head: an pointer
 * @n: data value
 * Return: addr of elem
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	return (node);
}
