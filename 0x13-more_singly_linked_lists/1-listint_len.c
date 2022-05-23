#include "lists.h"

/**
*listint_len - list element of linked list
*@h: header node
*Return: count
*/

size_t listint_len(const listint_t *h)
{
const listint_t *current;
int count = 0;

if (h == NULL)
return (0);
current = h;
while (current != NULL)
{
current = current->next;
count++;
}
return (count);
}
