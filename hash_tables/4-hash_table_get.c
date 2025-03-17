#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key to search for
 * Return: the value associated with the key or NULL if the key doesn't exist
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	while (ht->array[index] != NULL)
	{
		if (ht->array[index]->key == key)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
