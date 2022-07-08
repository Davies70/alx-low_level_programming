#include "lists.h"
/**
 *get_dnodeint_at_index - function to returns node int data at given index
 *@head: head pointer
 *@index: node index
 *Return: int data of node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *reader;
	size_t size = 0;
	size_t i = 0;

	current = head;
	reader = head;
	if (head == NULL)
		return (NULL);
	while (reader->next != NULL)
	{
		reader = reader->next;
		size++;
	}
	if (index > size)
		return (NULL);
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
