#include "main.h"

/**
 * _isalpha - Short description, check alphabet
 * @c: variable value
 * Return: on success (0)
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

