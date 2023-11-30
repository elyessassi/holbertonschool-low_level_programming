#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - func that prints lists
 * @h: linked list
 * Return: number of elements
*/

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0 ; h != NULL ; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			printf("\n");
			h = h->next;
		}
	}
	return (i);
}
