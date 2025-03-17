#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_node = 1;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				if (first_node == 1)
				{
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					first_node = 0;
					ht->array[i] = ht->array[i]->next;
				}
				else
				{
					printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
				}
			}
		}
		printf("}\n");
	}
}
