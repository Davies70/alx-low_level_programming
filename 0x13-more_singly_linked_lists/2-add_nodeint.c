#include "lists.h"

/**
* add_nodeint - add node in front of list
* @head: head node
* @n: integer
* Return: head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (0);
newnode->n = n;
newnode->next = *head;
*head = newnode;
if (*head == NULL)
return (NULL);
else
return (*head);
}
