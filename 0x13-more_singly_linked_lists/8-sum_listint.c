#include "lists.h"
/**
* sum_listint - function that sums the integer
* data in a list
* @head: head node
* Return: sum
*/

int sum_listint(listint_t *head)
{
listint_t *temp;
int total = 0;

if (!head)
return (0);
temp = head;
while (temp != NULL)
{
total += temp->n;
temp = temp->next;
}
return (total);
}
