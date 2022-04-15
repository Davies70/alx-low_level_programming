#include "main.h"

/**
 * _isupper - Short description
 *@c: character variable
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c++;
		return (1);
	}
	else
		return (0);
}
