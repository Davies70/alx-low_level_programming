#include "main.h"
/**
 * _strchr - Entry point
 *@s: string
 *@c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);

}
