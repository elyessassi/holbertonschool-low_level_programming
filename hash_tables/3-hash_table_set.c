#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds a key value pair to a hash table
 * @ht: pointer to the hash table
 * @key: the key to add
 * @value: the value to add
 * Return: 1 for success 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = (char *)key;
		ht->array[index]->value = strdup((char *)value);
		ht->array[index]->next = NULL;
	}
	else
	{
		while (ht->array[index]->next != NULL)
		{
			if (ht->array[index]->key == (char *)key)
			{
				ht->array[index]->value = (char *)value;
				return (1);
			}
			else
				ht->array[index] = ht->array[index]->next;
		}
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = (char *)key;
		ht->array[index]->value = strdup((char *)value);
		ht->array[index]->next = NULL;
		return (1);
	}
	return (1);
}
