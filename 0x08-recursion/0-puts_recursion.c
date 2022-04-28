#include "main.h"
/**
 * _puts_recursion - print string
 *@s: string name
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
