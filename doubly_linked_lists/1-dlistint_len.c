#include "lists.h"

/**
 * dlistint_len - func that returns number of elements
 * @h: head of list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
