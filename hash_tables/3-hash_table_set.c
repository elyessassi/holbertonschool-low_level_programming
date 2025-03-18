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
	hash_node_t *temp, *new_node;

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (temp->key == (char *)key)
		{
			free(temp->value);
			temp->value = strdup((char *)value);
			return (1);
		}
		else
			temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL) {
		return (0);
	}
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;


	return (1);
}
