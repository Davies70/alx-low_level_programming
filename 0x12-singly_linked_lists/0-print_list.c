#include "lists.h"
#include <stdio.h>

/**
* print_list - function to print linked list
* @h: head pointer
* Return: count
*/

size_t print_list(const list_t *h)
{
const list_t *current;
int count = 0;

if (h == NULL)
return (0);
current = h;
while (current != NULL)
{
if (current->str != NULL)
printf("[%d] %s\n", current->len, current->str);
else
printf("[%d] %s\n", 0, "(nil)");
current = current->next;
count++;
}
return (count);
}
