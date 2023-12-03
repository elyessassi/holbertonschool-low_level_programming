#include "lists.h"

/**
 * add_dnodeint - func that adds a new node to the beginning
 * @n: data to add to the new node
 * @head: head of list
 * Return: NULL or the node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
        (*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
