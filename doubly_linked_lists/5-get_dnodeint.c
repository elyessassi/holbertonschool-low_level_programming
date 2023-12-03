#include "lists.h"

/**
 * get_dnodeint_at_index - git the node with the index
 * @head: head of list
 * @index: index of list
 * Return: NULL or the node with the index numbre
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
