#include "lists.h"
#include <stdio.h>
/**
* _strlen - returns length of string
* @str: string pointer
* Return: i
*/
int _strlen(const char *str)
{
int i = 0;

while (str[i] != '\0')
{
i++;
}
return (i);
}

/**
* add_node_end - add node at end of the string
* @head: head node:
* @str: string to be added
* Return: newnode
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *lastnode;
int length;

length = _strlen(str);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->len = length;
newnode->str = strdup(str);
newnode->next = NULL;
if (*head == NULL)
*head = newnode;
else
{
lastnode = *head;
while (lastnode->next != NULL)
{
lastnode = lastnode->next;
}
lastnode->next = newnode;
}
return (newnode);
}
