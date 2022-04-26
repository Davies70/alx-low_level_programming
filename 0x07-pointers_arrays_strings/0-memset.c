#include "main.h"
/**
 * _memset - funtion to replace memory block with constant character
 *@s: string name
 *@b: const. char.
 *@n: char. size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
