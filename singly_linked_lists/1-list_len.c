#include "lists.h"

/**
 * list_len - func that countes the numbre of nodes
 * @h: node
 * Return: numbre of nodes
*/

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0 ; h != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
