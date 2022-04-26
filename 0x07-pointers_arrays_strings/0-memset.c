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
	
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
