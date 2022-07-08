#include "lists.h"
/**
 *add_dnodeint_end - a function that add node to the end of a doubly linked list
 *@head: pointer to the pointer to the head node
 *@n: node int data
 *Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	dlistint_t *temp;

	temp = *head;
	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->prev = NULL;
	NewNode->next = NULL;
	if (temp == NULL)
	{
		temp = NewNode;
	}
	temp->next = NewNode;
	NewNode->prev = temp;
	temp = NewNode;
	return (NewNode);

}
