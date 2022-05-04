#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function to copy string into ram
 *@str: string
 * Return: p
 */

char *_strdup(char *str)
{
	int i;
	char *p;
	int n;

	if (str == NULL)
		return (NULL);
	n = _len(str);
	p = malloc(sizeof(char) * (n + 1));
	if (p != NULL)
	{
		for (i = 0; i < n; i++)
			p[i] = str[i];
	}
	return (p);
}

/**
 * _len - function to return string length
 *@str: string
 * Return: i
 */
int _len(char *str)
{
	int i;

	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}




