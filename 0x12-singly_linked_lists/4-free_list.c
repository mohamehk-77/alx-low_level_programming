#include "lists.h"
/**
 * free_list - free func
 * @head: pointer
 * Retrun: 0
 */
void free_list(list_t *head)
{
		list_t *moo, *hamo;

		for (moo = head; moo != NULL; moo = hamo)
		{
			hamo = moo->next;
			free(moo->str);
			free(moo);
		}
}
