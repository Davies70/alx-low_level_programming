#include "lists.h"

/**
* get_nodeint_at_index - return the node of the lists
* @head: head pointer
* @index: index of node
* Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current, *node;
unsigned int count = 0;

current = head;
if (!head || !index)
return (NULL);
while (count < index)
{
current = current->next;
count++;
}
node = current;
return (node);
}
