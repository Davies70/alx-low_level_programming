#include "main.h"
#include "stdlib.h"
#include "stddef.h"

/**
 * create_array - function to create an array
 *@size: size of array
 *@c: character to print
 * Return: b
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);
	b = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}

