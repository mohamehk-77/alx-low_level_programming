#include "lists.h"
/**
 * free_listint - Frees a listint_t list
 * @head: pointer
*/
void free_listint(listint_t *head)
{
	listint_t *link, *temp;

	for (link = head; link != NULL; link = temp)
	{
		temp = link->next;
		free(link);
	}
	head = NULL;
}
