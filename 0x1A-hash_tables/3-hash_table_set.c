#include "hash_tables.h"
/**
 * set_node - helper function
 *
 * @n_n: parameter that point to hash_node_t
 *
 * @key: parameter that point to const char
 *
 * @value: parameter that point to const char
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int set_node(hash_node_t *n_n, const char *key, const char *value)
{
	n_n->key = strdup(key);
	n_n->value = strdup(value);
	if (!n_n->key || !n_n->value)
	{
		return (0);
	}
	return (1);
}
/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: parameter that point to hash_node_t
 *
 * @key: parameter that point to const char
 *
 * @value: parameter that point to const char
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *n_n, *tmp;

	if (!ht || !key || !*key || !value)
	{
		return (0);
	}
	n_n = malloc(sizeof(hash_node_t));
	if (!n_n)
	{
		return (0);
	}
	if (!set_node(n_n, key, value))
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = n_n->value;
			free(n_n->key);
			free(n_n);
			return (1);
		}
		tmp = tmp->next;
	}
	n_n->next = ht->array[index];
	ht->array[index] = n_n;
	return (1);
}
