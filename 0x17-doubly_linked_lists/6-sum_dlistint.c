#include "lists.h"
/**
 *sum_dlistint - adds the int data of nodes
 *@head: head pointer
 *Return: sum of int data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int number = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		number += current->n;
		current = current->next;
	}
	return (number);
}
