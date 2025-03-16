#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = calloc(sizeof(hash_table_t), 1);

	if (newHashTable == NULL)
	{
		return (NULL);
	}
	newHashTable->size = size;
	newHashTable->array = calloc(sizeof(hash_node_t), size);
	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}
	return (newHashTable);
}
