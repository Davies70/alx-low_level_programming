#include "lists.h"
/**
 *add_dnodeint_end - a function that add node to the end of doubly linked list
 *@head: pointer to the pointer to the head node
 *@n: node int data
 *Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	dlistint_t *current;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->prev = NULL;
	NewNode->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = NewNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = NewNode;
		NewNode->prev = current;
	}
	return (NewNode);

}
