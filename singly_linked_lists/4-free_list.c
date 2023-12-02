#include "lists.h"

/**
 * free_list - func that frees a list
 * @head: head of list
*/

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp->next != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
