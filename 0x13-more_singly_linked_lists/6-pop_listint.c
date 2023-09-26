#include "lists.h"
/**
 * pop_listint - Deletes the head node
 * @head: Pointer to a pointert
 * Return: data
 */
int pop_listint(listint_t **head)
{
	int info = 0;
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	info = temp->n;
	free(temp);
	return (info);
}
