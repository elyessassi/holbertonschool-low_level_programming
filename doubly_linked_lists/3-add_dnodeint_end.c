#include "lists.h"

/**
 * add_dnodeint_end - func that adds a node to the end
 * @head: head of list
 * @n: data
 * Return: NULL or the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = NULL;
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (NULL);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newnode->prev = temp;
	temp->next = newnode;
	return (newnode);
}
