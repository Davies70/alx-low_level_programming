#include "lists.h"
/**
 *dlistint_len - count length of string
 *@h: pointer  of head node
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;
	const dlistint_t *node;

	node = h;
	if (h == NULL)
		return (0);
	while (node != NULL)
	{
		node = node->next;
		n++;
	}
	return (n);
}
