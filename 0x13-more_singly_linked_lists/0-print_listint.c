#include "lists.h"
#include <stdio.h>

/**
*print_listint - print elements of list
*@h: head node
*Return: count
*/
size_t print_listint(const listint_t *h)
{
int count = 0;
const listint_t *current;

if (h == NULL)
return (0);
current = h;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
