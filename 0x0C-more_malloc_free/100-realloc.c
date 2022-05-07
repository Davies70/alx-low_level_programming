#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*_realloc: functions that reallocs
*@ptr: pointer to old block
*@old_size: old size
*@new_size: new size
*Return: ptr, p
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;

p = malloc(new_size);
ptr = (char*) malloc(old_size);

if (new_size > old_size)
{
return (p);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL && old_size && new_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
free(p);
return (NULL);
}
