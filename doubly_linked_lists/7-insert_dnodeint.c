#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts a node
 * @h: head of list
 * @idx: index to insert node to
 * @n: data
 * Return: NULL or the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t)), *temp = *h;
	unsigned int i = 0;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*h == NULL)
	{
		*h = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
		return (newnode);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp != NULL)
	{
		if (i == (idx - 1))
		{
			if (temp->next == NULL)
			{
				add_dnodeint_end(h, n);
				return (*h);
			}
			else
			{
				newnode->next = temp->next;
				temp->next = newnode;
				newnode->prev = temp;
				if (newnode->next != NULL)
					newnode->next->prev = newnode;
				return (newnode);
			}
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
