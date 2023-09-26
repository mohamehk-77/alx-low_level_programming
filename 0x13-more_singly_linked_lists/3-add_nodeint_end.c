#include "lists.h"
/**
 * add_nodeint_end - Add a new node
 * @head: Pointer to a pointer
 * @n: data value
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *hamo = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	*head = node;
	if (!hamo)
	{
		*head = node;
	}
	else
	{
		while (hamo->next)
		{
			hamo = hamo->next;
			hamo->next = node;
		}
	}
	return (node);
}
