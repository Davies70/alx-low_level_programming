#include "lists.h"
/**
 *add_dnodeint - function that add node to the front of lists
 *@head: pointer to the head pointer of the list
 *@n: node int data
 *Return: address of new node or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	dlistint_t *current;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	current = *head;

	if (*head == NULL)
		*head = NewNode;
	else
	{
		NewNode->next = current;
		current->prev = NewNode;
		*head = NewNode;
	}
	return (NewNode);
}
