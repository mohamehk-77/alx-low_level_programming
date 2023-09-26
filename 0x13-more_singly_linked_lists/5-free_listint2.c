#include "lists.h"
/**
 * free_listint2 - free
 * @head: pointer to pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *link, *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	link = *head;
	
	while (link)
	{
		temp = link->next;
		free(link);
		link = temp;
	}
	*head = NULL;
}
