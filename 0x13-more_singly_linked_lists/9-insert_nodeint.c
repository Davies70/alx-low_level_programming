#include "lists.h"
/**
* insert_nodeint_at_index - add node to a linked list
* @head: head node
* @idx: node index to be added
* @n: data to be in the node
* Return: newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *NewNode, *BackNode, *temp;
unsigned int count = 1;

NewNode = malloc(sizeof(listint_t));
if (NewNode == NULL)
return (NULL);
NewNode->n = n;
if (!*head)
return (NULL);
BackNode = *head;
while (count < idx)
{
BackNode = BackNode->next;
count++;
}
temp = BackNode->next;
BackNode->next = NewNode;
NewNode->next = temp;
return (NewNode);

}
