#include "lists.h"
/**
 * listint_len - func
 * @h: pointer
 * Return: 0
*/
size_t listint_len(const listint_t *h)
{
		size_t arwo = 0;

		for (; h != NULL; h = h->next)
		{
				arwo++;
		}
		return (arwo);
}
