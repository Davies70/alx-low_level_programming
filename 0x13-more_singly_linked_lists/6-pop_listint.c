#include "lists.h"

/**
*pop_listint - funtion to delete head node
*@head: head node
*Return: current
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int number;

if (*head = NULL || head == NULL)
return (0);
number = (*head)->n;
temp = (*head)->next;
free(head);
*head = temp;
return (number):
}
