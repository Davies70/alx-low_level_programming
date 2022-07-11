#include "main.h"
/**
 * _strlen - Entry point
 *@s: character
 * Return: Always i (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
