#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - returns the index where the key is stored
 * @key: the key
 * @size: the size of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
