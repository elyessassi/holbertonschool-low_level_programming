#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node in a dlinked list
 * @head: double linked list to the doubly linked list
 * @index: index of the node to remove
 * Return: 1 for success -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (0);
	if (index == 0 && (*head)->next == NULL)
	{
		*head = NULL;
		return (0);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->next == NULL)
			{
				temp = temp->prev;
				temp->next = NULL;
				return (1);
			}
			else
			{
				temp = temp->next;
				temp->prev->prev->next = temp;
				return (1);
			}
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
