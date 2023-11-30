#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - function to add a node
 * @head: head node
 * @str: string to add
 * Return: 0 or node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
