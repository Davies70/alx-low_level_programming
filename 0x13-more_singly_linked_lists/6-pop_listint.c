#include "lists.h"

/**
 *pop_listint - funtion to delete head node
 *@head: head node
 *Return: current
 */
int pop_listint(listint_t **head)
{
	listint_t *current;

	if (*head || head == NULL)
		return (0);
	current = *head;
	*head = (*head)->next;
	free(current);
	return (current->n):
}
