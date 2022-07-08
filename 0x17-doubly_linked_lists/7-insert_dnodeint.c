#include "lists.h"
/**
 *insert_dnodeint_at_index - function to insert a node
 *@h: pointer to the head pointer
 *@idx: index to insert
 *@n: node data
 *Return: NewNode or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *count;
	dlistint_t *New;
	dlistint_t *temp;
	unsigned int size = 0;
	unsigned int i = 0;

	if (h* == NULL)
		return NULL;
	count = *h;
	while (count->next != NULL)
	{
		count = count->next;
		size++;
	}
	if (idx > size)
		return (NULL);
	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);
	New->n = n;
	current = *h;
	while (i < idx)
	{
		current = current->next;
		i++;
	}
	temp = current->prev;
	temp->next = New;
	current->prev = New;
	New->prev = temp;
	New->next = current;
	return (New);


}
