#include "lists.h"
/**
 * get_nodeint_at_index - Returns node
 * @head: Pointer
 * @index: Index
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int hamo = 0;

	listint_t *hamo2 = head;

	while (hamo2 != NULL)
	{
		if (hamo == index)
		{
			return (hamo2);
		}
		hamo2 = hamo2->next;
		hamo++;
	}
	return (NULL);
}
