#include "lists.h"
#include "stdio.h"

/**
* free_list - function to free list
* @head: head node
*/
void free_list(list_t *head)
{
list_t *temp, *ptr;

ptr = head;
while (head != NULL)
{
temp = ptr;
ptr = ptr->next;
free(temp->str);
free(temp);
}

}
