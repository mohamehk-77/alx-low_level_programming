#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted linked list
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node with the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (!list || size == 0)
    {
        return NULL;
    }

    int jump_step = ceil(sqrt(size)); // Use ceil() for integer jump size
    listint_t *current = list;

    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
        for (int i = 0; i < jump_step - 1 && current; i++)
        {
            current = current->next;
        }
    }

    if (current && current->n == value)
    {
        printf("Value found between indexes [%lu] and [%lu]\n", list->index, current->index);
        return current;
    }
    else
    {
        // Linear search within the identified range
        current = list;
        while (current && current->n < value)
        {
            current = current->next;
        }
        if (current && current->n == value)
        {
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
            return current;
        }
        else
        {
            printf("Value found between indexes [%lu] and [%lu]\n", list->index, current->index);
        }
    }

    return NULL;
}
