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
	hash_node_t *temp;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (first_node == 1)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					first_node = 0;
					temp = temp->next;
				}
				else
				{
					printf(", '%s': '%s'", temp->key, temp->value);
					temp = temp->next;
				}
			}
		}
		printf("}\n");
	}
}
