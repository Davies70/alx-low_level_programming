#include "lists.h"
#include <stdio.h>

/**
* list_len - counts nodes
* @h: node pointer
* Return: count
*/

size_t list_len(const list_t *h)
{
int count = 0;
const list_t *current;

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
