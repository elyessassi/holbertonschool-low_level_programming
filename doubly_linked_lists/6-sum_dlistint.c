#include "lists.h"

/**
 * sum_dlistint - sum of elements in list
 * @head: head of list
 * Return 0 or the sum
*/

int sum_dlistint(dlistint_t *head)
{
    int i = 0;

    if (head == NULL)
    {
        return (0);
    }
    while (head != NULL)
    {
        i = i + head->n;
        head = head->next;
    }
    return (i);
}
