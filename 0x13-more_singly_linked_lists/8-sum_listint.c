#include "lists.h"
/**
 * sum_listint - rerurn sum
 * @head: pointer
 * Return: 0
*/
int sum_listint(listint_t *head)
{
	listint_t *link = head;
	size_t num = 0;

	while (link)
	{
		num += link->n;
		link = link->next;
	}
	return (num);
}
