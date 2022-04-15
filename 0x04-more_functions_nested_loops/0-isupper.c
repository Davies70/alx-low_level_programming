#include "main.h"

/**
 * _isupper - Short description
 *@c: character variable
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z')
	{
		c = 'A';
		c++;
		return (1);
	}
	else if (c <= 'z')
	{
		c = 'a';
		c++;
		return (0);
	}
	return (0);
}
