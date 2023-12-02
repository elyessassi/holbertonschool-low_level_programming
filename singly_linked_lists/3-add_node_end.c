#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - function to add a node
 * @head: head node
 * @str: string to add
 * Return: 0 or node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (newnode == NULL)
	{
		return (0);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->len = strlen(newnode->str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
