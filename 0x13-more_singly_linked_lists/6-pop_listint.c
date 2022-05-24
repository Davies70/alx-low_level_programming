#include "lists.h"

/**
 *pop_listint - funtion to delete head node
 *@head: head node
 *Return: current
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
		return (0);
	else
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	return (current->n);
}
