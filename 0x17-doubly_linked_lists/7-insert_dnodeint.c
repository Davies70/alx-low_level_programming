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
	dlistint_t *New;
	dlistint_t *temp;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);
	New->n = n;
	current = *h;
	while (i < idx)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		i++;
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	temp = current->prev;
	temp->next = New;
	current->prev = New;
	New->prev = temp;
	New->next = current;
	return (New);


}
