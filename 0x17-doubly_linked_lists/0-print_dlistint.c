#include "lists.h"
/**
 * print_dlistint - function prints elements of dlist
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0, j;
	const dlistint_t *node;

	if (h == NULL)
		return (0);
	node = h;
	while (node != NULL)
	{
		j = node->n;
		printf("%d\n", j);
		node = node->next;
		n++;
	}
	return (n);
}
