#include "lists.h"
#include <stdio.h>
/**
* _strlen - length of string
* @string: string pointer
* Return: i
*/

int _strlen(const char*string)
{
int i = 0;

while (string[i] != '\0')
{
i++;
}
return (i);
}

/**
* add_node - add a new node
* @head: pointer to pointer
* @str: string
*/

list_t *add_node(list_t **head, const char *str)
{
int length;
list_t* newnode;

length = _strlen(str);
newnode = malloc(sizeof(list_t));
newnode->len = length;
newnode->str = strdup(str);
newnode->next = *head;
*head = newnode;
if (*head != NULL)
return (*head);
else
return (NULL);
}

