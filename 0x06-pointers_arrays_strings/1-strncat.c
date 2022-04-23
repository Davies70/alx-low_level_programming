#include "main.h"

/**
 * _strncat - Entry point
 *@dest: first pointer
 *@src: second pointer
 *@n: byte limit
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}
