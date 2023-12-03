#include "hash_tables.h"
/*
* create_and_add_node - func
* @key: 1
* @value: 2
* @index: 3
*
* Return: 0 if it success 1 uf it's  fails
*/

int create_and_add_node(hash_table_t *ht, const char *key, const char *value, unsigned int index)
{
        hash_node_t *new_node = malloc(sizeof(hash_node_t));

        if (new_node == NULL)
                return 0;

        new_node->key = strdup(key);
        if (new_node->key == NULL)
        {
                free(new_node);
                return 0;
        }

        new_node->value = strdup(value);
        if (new_node->value == NULL)
        {
                free(new_node->key);
                free(new_node);
                return 0;
        }

        new_node->next = ht->array[index];
        ht->array[index] = new_node;

        return 1;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned int index = key_index((const unsigned char *)key, ht->size);
        hash_node_t *main = ht->array[index];

        if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
                return 0;

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

        return (create_and_add_node(ht, key, value, index));
}
