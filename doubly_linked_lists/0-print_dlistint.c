#include "lists.h"

/**
 * print_dlistint - print a list
 * @h: head of list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		printf("\n");
		temp = temp->next;
		i++;
	}
	return (i);
}
