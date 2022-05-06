#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
 *string_nconcat - concatenating function
 *@s1: string 1
 *@s2: string 2
 *@n: integer
 * Return: Always p;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *p;

	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	a = length(s1);
	b = length(s2);
	p = malloc(sizeof(char) * (a + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\n')
	{
		p[i] = s1[i];
	}
	while (j < b)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
/**
 *length - return string length
 *@s: string
 *Return: i
 */

int length(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}
