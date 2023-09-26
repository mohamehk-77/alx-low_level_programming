#include "lists.h"
/**
 * free_listint2 - free
 * @head: pointer to pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *link, *temp;

	for (link = head; link != NULL; link = temp)
	{
		temp = link->next;
		temp = link->next;
		temp =  link->next;
		temp = link;
		free(link);
	}
	head = NULL;
}
