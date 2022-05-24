#include "lists.h"

/**
* free_listint2 - free list
* @head: head node
*/

void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *temp;

if (head == NULL)
return;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
