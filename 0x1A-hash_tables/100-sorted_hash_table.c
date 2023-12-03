#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return NULL;

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return ht;
}

/**
 * create_and_add_snode - Create and add a sorted node to the hash table
 * @ht: The hash table to add the new node to
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
shash_node_t *create_and_add_snode(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return NULL;

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return NULL;
	}

	new_node->next = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		shash_node_t *current = ht->shead;
		shash_node_t *prev = NULL;

		while (current != NULL && strcmp(key, current->key) > 0)
		{
			prev = current;
			current = current->snext;
		}

		if (prev == NULL)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			new_node->snext = current;
			new_node->sprev = prev;
			prev->snext = new_node;

			if (current != NULL)
				current->sprev = new_node;
			else
				ht->stail = new_node;
		}
	}

	return new_node;
}

/**
 * shash_table_set - Add an element to the sorted hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return 0;

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *main = ht->array[index];

	while (main != NULL)
	{
		if (strcmp(main->key, key) == 0)
		{
			free(main->value);
			main->value = strdup(value);
			if (main->value == NULL)
				return 0;
			return 1;
		}
		main = main->next;
	}

	shash_node_t *snode = create_and_add_snode(ht, key, value);
	if (snode == NULL)
		return 0;

	snode->next = ht->array[index];
	ht->array[index] = snode;

	return 1;
}

/**
 * shash_table_get - Retrieve a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return NULL;

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *main = ht->array[index];

	while (main != NULL)
	{
		if (strcmp(main->key, key) == 0 && main->deleted == false)
			return main->value;
		main = main->next;
	}
