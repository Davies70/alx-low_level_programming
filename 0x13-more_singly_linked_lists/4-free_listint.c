#include "lists.h"

/**
 * free_listint - free up dynamically allocated lists
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head-> next;
		free(ptr->next);
	}
}
